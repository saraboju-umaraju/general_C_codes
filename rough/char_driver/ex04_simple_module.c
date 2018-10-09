

/*
   program to demonstrate the insertation of simple module with MODULE_LINCSE & __init

 */


#include <linux/init.h>

#include <linux/module.h>

//MODULE_LICENSE("GPL");

__init int ex04_simple_module_function1(void)
{
	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);
	return 0;
}

int ex04_simple_module_function2(void)
{
	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);
	return 0;
}
__initdata int count = 5;

static int __init ex04_simple_module_init(void)
{

	int index;
	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);
	return 0;

	for(index = 0; index <= count; index++){

		printk(KERN_ALERT "index = %d\n",index);
	}
	ex04_simple_module_function1();
	ex04_simple_module_function2();

}

void ex04_simple_module_exit(void)
{

	printk(KERN_ALERT "Inside the %s function\n",__FUNCTION__);
	ex04_simple_module_function2();

}

module_init(ex04_simple_module_init);

module_exit(ex04_simple_module_exit);
