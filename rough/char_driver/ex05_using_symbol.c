

/*
   program to demonstrate the insertation of simple module

 */


#include <linux/init.h>

#include <linux/module.h>


int ex05_simple_module_func1(void);

int ex05_using_simple_module_init(void)
{
	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);

	ex05_simple_module_func1();

	return 0;

}

void ex05_using_simple_module_exit(void)
{

	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);

}

module_init(ex05_using_simple_module_init);

module_exit(ex05_using_simple_module_exit);
