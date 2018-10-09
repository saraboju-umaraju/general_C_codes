#include	<uma.h>
int main()
{
		char *p,*q;
//		printf("%p\n",p);
//		printf("%d\n",*p);

		p=malloc(1);

//		*p = 30;
		printf("%p\n",p);

	printf("%d\n",*(p - 0));
//		p=NULL;
		q=malloc(11);
		*p = 30;
	/*	printf("%p\n",p);
		printf("%p\n",q);
		printf("%d\n",*q);
*/
}
