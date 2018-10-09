#include	<stdio.h>

static int a;
int main(void)

{

	printf("%d\n", a);
	ADD(5,2);
}
int a = 10;
ADD(int c, int b)
{
	printf("%d\n", a);

	return c + b;

}
