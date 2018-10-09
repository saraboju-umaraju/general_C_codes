
/** System Includes **/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <asm/page.h>
#include <asm/pgtable.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <linux/mm.h>
#include <linux/const.h>
#include <linux/types.h>
#include <asm/pgtable_32.h>

#include <linux/bootmem.h>
#include <linux/export.h>
#include <linux/highmem.h>
#include <asm/processor.h>
#include <asm/pgalloc.h>
#include <asm/tlbflush.h>


MODULE_LICENSE ("Dual BSD/GPL");

/** Constants **/
#define FIRST_MINOR	10
#define NR_DEVS 1	//	Number of device numbers

// Function Declaration for syscall definitions
int myOpen (struct inode *inode,struct file *filep);
int myRelease (struct inode *in,struct file *fp);
int my_ioctl(struct inode *ind, struct file *fl, unsigned int *cmd);

//Initialization routines
static int myInit (void);
static void myExit (void);

struct file_operations fops = {
		.owner		=	THIS_MODULE,
		.unlocked_ioctl	=	my_ioctl,
		.open		=	myOpen,
		.release	=	myRelease
};
/* Global varibales */
char *devname; // Contains device name
int majNo;
static dev_t mydev; // encodes major number and minor number
struct cdev *my_cdev; // holds character device driver descriptor

/* To accept input from the command line */
module_param (devname, charp, 0000);

// Class and device structures 
static struct class *mychar_class;
static struct device *mychar_device;

/*
 * myopen: open fucntions of the pseudo driver
 *
 */

int myOpen (struct inode *inode, struct file *filep)
{	
	printk (KERN_INFO "Open successful\n");
	return 0;
}


int my_ioctl(struct inode *ind, struct file *fl, unsigned int *cmd)
{
	printk("Kernal : %08x  %d\n", (unsigned int)cmd, *cmd);

//	printk("%u\t%u\t%u\n", PTRS_PER_PGD, PTRS_PER_PMD,PTRS_PER_PTE);
	struct task_struct *p = current;
	
	pgd_t *_pgd = NULL;
	pte_t  *_pte = NULL;
	unsigned int t1 = 0;
	unsigned int t2 = 0;
	unsigned int *t3 = NULL;

	_pgd = p->mm->pgd;			//base address of pgd 


	_pgd = _pgd + ((int)cmd >> 22);

	t1 =(unsigned int)((_pgd ->pgd) & PAGE_MASK);

	_pte = kmap(mem_map + (t1 >> PAGE_SHIFT));

	_pte = _pte +(((int)cmd >> PAGE_SHIFT) & 0x000003ff);

	t2 = (unsigned int)((_pte)->pte) & PAGE_MASK;

	printk("physical address : %08x\n", t2);

/*	t3 = (kmap(mem_map + (t2 >> PAGE_SHIFT)) + ((int)cmd & 0x00000fff)) ;	

	if(*t3 == *cmd){

		*t3 = 5;			// changing the value of x 
		
		printk("***** PAGE_WALK SUCCESSFUL *****\n");

	}*/

	return 0;
	

}

/*
 * myRelease: close function of the pseduo driver
 *
 */

int myRelease (struct inode *in, struct file *fp)
{
	printk (KERN_INFO "File released \n");
	return 0;
}
/*
 * myInit: init function of the kernal module
 *
 */


static int __init myInit (void)
{
	int ret	=	-ENODEV;
	int status;

	printk (KERN_INFO "Initializing Character Device \n");

    // Allocating Device Numbers
	status	=	alloc_chrdev_region (&mydev, FIRST_MINOR, NR_DEVS, devname);
    if (status < 0)
    {
	    printk (KERN_NOTICE "Device numbers allocation failed: %d \n",status);
        goto err;
    }

    printk (KERN_INFO "Major number allocated = %d \n",MAJOR(mydev));
    my_cdev	=	cdev_alloc (); // Allocate memory for my_cdev
    if (my_cdev == NULL) {
	    printk (KERN_ERR "cdev_alloc failed \n");
	    goto err_cdev_alloc;
}

    cdev_init (my_cdev, &fops); // Initialize my_cdev with fops
    my_cdev->owner	=	THIS_MODULE;

    status	=	cdev_add (my_cdev, mydev, NR_DEVS); // Add my_cdev to the list
    if (status) {
	printk (KERN_ERR "cdev_add failed \n");
	goto err_cdev_add;
}
    // Create a class an entry in sysfs
    mychar_class = class_create (THIS_MODULE, devname);
    if (IS_ERR(mychar_class)) {
	printk (KERN_ERR "class_create() failed \n");
	goto err_class_create;
}
    // Creates mychar_device in sysfs and an
    // device entry wiil be made in /dev directory
    mychar_device =	device_create (mychar_class, NULL, mydev, NULL, devname);
    if (IS_ERR(mychar_device)) {
	printk (KERN_ERR "device_create() failed \n");
	goto err_device_create;
    }

return 0;

err_device_create:
	class_destroy (mychar_class);

err_class_create:
	cdev_del(my_cdev);

err_cdev_add:
	kfree (my_cdev);

err_cdev_alloc:
	unregister_chrdev_region (mydev, NR_DEVS);

err:
	return ret;
}
/*
 * myExit: cleanup function of the kernal module
 */

static void myExit (void)
{
	printk (KERN_INFO "Exiting the Character Driver \n");

	device_destroy (mychar_class, mydev);
	class_destroy (mychar_class);
	cdev_del (my_cdev);
	unregister_chrdev_region (mydev, NR_DEVS);

	return;
}

module_init(myInit);
module_exit(myExit);




