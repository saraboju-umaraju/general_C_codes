#include	<stdio.h>
	void fun(void)
	{
	int normvar=0;
	static int splvar=0;
	normvar=normvar+1;
	splvar=splvar+1;
	printf("value of normvar is %d\n:",	normvar);
	printf("the vlue of splvar is %d\n:" ,splvar);
	}
	int main(void)
	{
	int i;
	for (i=0;i<5;i++)
	fun();
	return 0;
	}

