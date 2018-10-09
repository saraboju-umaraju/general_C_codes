#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int *ptr = NULL;
	int i=0;
	while (1) {
		ptr = malloc (4096);
		printf ("ptr = %p\n",ptr);
		printf("%d\n",i++);
	}

	return 0;
}
