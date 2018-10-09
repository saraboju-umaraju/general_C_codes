

/*
   program to demonstrate the exporting symbol module

 */


#include <linux/init.h>

#include <linux/module.h>

static int ex05_simple_module_func1(void)
{

	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);
	return 0;
}

EXPORT_SYMBOL(ex05_simple_module_func1);

int ex05_exporting_simple_module_init(void)
{
	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);
	return 0;

}

void ex05_exporting_simple_module_exit(void)
{

	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);

}

module_init(ex05_exporting_simple_module_init);

module_exit(ex05_exporting_simple_module_exit);
