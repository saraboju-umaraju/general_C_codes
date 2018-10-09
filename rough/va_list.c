#include	<stdarg.h>

#include	<stdio.h>

int sum ( int , ... ) ;

int main ( void ) 
{
	printf("sum is %d\n" , sum ( 5 , 1 , 2 , 3 , 4 , 9 ))  ;

	return 0 ;

}

int sum ( int count , ... ) 
{
	va_list args ;

	int sum = 0 ;
	
	int i = 0 ;

	va_start ( args , count ) ;
	
	for ( i = 0 ; i < count ; i ++ ) sum+= va_arg ( args , int ) ;

	va_end ( args ) ;

	return sum ;

}

	
