#include	<stdio.h>
		void fun(char*);
int main(void)
{
		char c[10];
printf("enter astring buddy\n");
		scanf("%[^\n]s",c);
	fun(c);
				return 0;
}
 void fun(char *s)
	{
	printf("%s\n",s);
}
