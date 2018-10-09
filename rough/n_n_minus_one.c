#include	<stdio.h>

int main ( void )
{
	int n = 199 ;

	printf("val is %d\n",n & ( n-1 ) );
	
	printf("val is %d\n", - ( ~n )  );
	
	return printf("val is %d\n", ~ ( -n ) );


}
