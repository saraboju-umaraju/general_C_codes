#define MODULE
#define LINUX
#define __KERNEL__

#ifndef __LINUX_FDTABLE_H
#define __LINUX_FDTABLE_H
#endif

#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>


extern void first ( void ) ;

void second ( void ) ;

void third ( void ) ;

void first ( ) 
{
		printk ("Iam is %s\n" , __func__) ;

		//third() ;

}

static __init int init(void)

{

		printk("init mod \n");
	
		first() ;

		return 0;
}


static __exit void cleanup(void)
{
		
		printk(KERN_ALERT "*************************************************************\n");


		printk(KERN_ALERT "*************************************************************\n");

}  

MODULE_LICENSE("GPL");
module_init(init);
module_exit(cleanup);

EXPORT_SYMBOL(first);
