#include	<stdio.h>
#include	<ctype.h>
int main(void)
{
		int c;
		c = (getchar() != EOF);
		printf("%d\n", c);
		return 0;
}
