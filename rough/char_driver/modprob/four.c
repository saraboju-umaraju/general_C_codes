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


void third ( void ) ;

void third ( ) 
{
		printk ("Iam in %s\n" , __func__) ;

}

int init_module(void)

{

		printk("init mod \n");

		return 0;
}


void cleanup_module(void)
{
		
		printk(KERN_ALERT "*************************************************************\n");


		printk(KERN_ALERT "*************************************************************\n");

}  

MODULE_LICENSE("GPL");

EXPORT_SYMBOL(third);
