#include	<stdio.h>

#define MACRO 12

int static_var = 0 ;

int function ( int var )
{
	if ( static_var == 999 ) return 0 ;

		function ( var ) ;

}

int main ( char c , char *v[] ) 
{	
	int variable = 1 ;

	int condition = 0 ;

	while ( variable ++ < 5000 ) {

		if ( condition == 1299 ) {

			fork (); 

		}

		if ( condition == 12999 ) {

			function ( 2 ) ;

		}
	
		printf ("variable value is %d %d\n" , variable , MACRO) ;

	}

}
