#include	<stdio.h>
#include	<string.h>
int main(void)
{
		char s[100];
		char t[100];
		int i=0,j=0;
		int n;
		printf("enter");
		//		scanf("%s",s);
		gets(s);
		n=strlen(s);
		printf("string lengtis %d\n", n);
		for (i=n;i>0;--i,j++)
		{ 
				t[j]=s[i-1];

		}
		t[j]='\0';
		printf("%s\n",t);
}
