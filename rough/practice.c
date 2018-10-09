#include	<stdio.h>

int main(void)
{
	int a[0] = {5};
	
	printf("%d\n",sizeof(a));
	
	printf("%d\n",sizeof(a[0]));
	
	return 0;
}

