#include	<uma.h>


int main ( void ) {

		function ( );

		printf ( "%s\n", stdout ) ;

}

int function ( void ) {

		//char *str = malloc ( 123 ) ;

		printf ( "enter a string\n" ) ;

		__fpurge ( stdin ) ;

		fflush ( stdout ) ;

		fgets ( stdout , 120 , stdin ) ;

}
