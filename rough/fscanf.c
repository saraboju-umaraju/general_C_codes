#include	<uma.h>

int main ( void ) 
{	
	char pointer[]  = "hello world" ;

	int a[ strlen( pointer ) ] ;

	int i = 0 ; 

	for ( i = 0 ; i < strlen ( pointer ) ; i++ )

	a[i] = 	 pointer [i]   ;

	for ( i = 0 ; i < strlen ( pointer ) ; i++ )

	printf ( "%c\n", a[i] )  ;

	}

		
