#include	<stdio.h>

int fun ( int , int , int ) ;

int main ( void ) 
{
	int x= 0 ;

	int y = 12 ;

	int z = 123 ;

	fun ( 1 , 2 , 3 ) ;

	printf("control is back to the superior\n");

	return 0 ;

}

int fun ( int x, int y , int z ) 
{
	printf("value of x is %d\n", x);

	printf("value of y is %d\n", y);
	
	printf("value of z is %d\n", x);

	return 0 ;

}
