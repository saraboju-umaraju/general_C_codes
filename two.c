#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

		int one = 0;

		int one_c = _val( NULL );

		int two = 0 ;

		while ( one < one_c ) {

				two = 0 ;

				while ( two <= one ) {

						printf("* ");

						two++ ;

				}

				one++ ;

				puts("");

		}

		return 0 ;

}
