#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

		int one = 1 ;

		int one_c = _val( NULL );

		int two = 0 ;

		int var = 1 ;

		while ( one <= one_c ) {

			two = one ;

				while ( two ) {
			
					printf("%3d " , var++);

					two -- ;

					}

					one++ ;

					puts("");

			}
					

		return 0 ;

}
