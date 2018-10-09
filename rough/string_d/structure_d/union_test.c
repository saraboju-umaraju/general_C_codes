#include	<stdio.h>
void test (unsigned char*);
int main()
{
		unsigned char c;
		int i=0;
		c=128;
		while(i<8){
				test(&c);
				++i;
		}
		printf("%d",c);
}
void test(unsigned char *c)
{
		union
		{
				unsigned u;
				unsigned char c[2];
		}
		uvar={0};
		uvar.c[0]=*c;
		uvar.u=uvar.u<<1;
		if(uvar.c[1])
				uvar.c[1]=uvar.c[0]|1;
		*c=uvar.c[0];
}
