#include	<uma.h>

void main()
{
		int i;

		char a=9;

		char *ptr;

		ptr=(char *)&a;

		*(ptr++);

		for(i=0;i<=30;i++)

				printf("%d ",*ptr);

		printf("\n");
}
