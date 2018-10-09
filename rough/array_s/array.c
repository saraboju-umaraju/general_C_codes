#include	<uma.h>
int main() 
{
		int a[5]={1,999,3,4,5};
		int (*p) [5]=&a;

		printf("%p\n",a);

		printf("%p\n",(*(p+1)+1));
		printf("%d      %d",*((*p+2)+2),sizeof(p));
}
