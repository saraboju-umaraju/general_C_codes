#include	<stdio.h>

#include	<_val.h>

extern int errno ;

int main ( void ) 
{
	int x = _val() ;
	
	int y = _val() ;

	printf("maximum of two is %d\n", x ^ (( x ^ y ) & - ( x < y )) );
	
	printf("minimum of two is %d\n", x ^ (( x ^ y ) & - ( x < y ) ));

	printf("%d\n",errno);

	errno = 35 ;

	perror("");
	
}	
