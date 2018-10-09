#include<stdio.h>

int eval(void)

{

	static int x = 10;

	x += 10;

	return x;

}

int main(void)

{

	int i, ret_val;

	for ( i = 0; i < 10; i++)

		ret_val = eval();

	printf("%d", ret_val);

	return 0;

}
