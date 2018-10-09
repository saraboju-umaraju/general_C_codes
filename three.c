#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

		int one = 0;

		int one_c = _val( NULL );

		int two = 0 ;

		one = one_c ;

		while ( one ) {

				two = one ;

				while ( two ) {

					printf("* ");

					two -- ;

				}

				puts("");

			one -- ;

		}

	return 0 ;

}

