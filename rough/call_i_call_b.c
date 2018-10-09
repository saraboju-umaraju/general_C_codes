#include 	<stdio.h>

int call_i ( ) {}

int call_b ( ) {}

int a = 12;

int b = 12 ;

int main ( void) {

			if ( a == b) {

					call_i () ;
			}

			else {

					call_b();
			}

			printf ( "tested\n" ) ;

			return 0;
}


