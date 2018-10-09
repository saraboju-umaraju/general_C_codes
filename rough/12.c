#include<stdio.h>

int main(void)

{

	int i, j, test = 1;

	for (i = 0; i < 10; i++) {

		i <<= test;

		printf("%d\t", i);

	}

	return 0;

}
