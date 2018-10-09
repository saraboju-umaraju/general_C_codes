#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

		int one = 0 ;

		int one_c = _val( NULL );

		int two = 0 ;

		int var = 0 ;

		if ( !( one_c % 2 ) ) one_c += 1 ;

		var = ( one_c / 2 ) + 1 ;

		while ( one <= ( one_c / 2 ) ) {

				if ( var == ( one_c / 2 ) ) {

						two = ( one_c / 2 ) ;

						while ( two ) {

								printf("  ") ;

								two--;

						}

						printf("* ") ;

						two = ( one_c / 2 ) ;

						while ( two ) {

								printf("  ") ;

								two--;

						}

					one++ ;

				}

				else {
						two = one ;
						while ( two ) {

								printf("  ") ;	

								two--;

						}
						printf("* ");

						two = one_c - 2 - ( 2 * one ) ;

						while ( two >= 0 ) {

								printf("  ") ;

								two--;

						}
						printf("* ");

						two = one ;

						while ( two>= 0 ) {

								printf("  ") ;

								two--;
						}
						one++ ;
				}

				puts("");

		}
		return 0 ;

}
