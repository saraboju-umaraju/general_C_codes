#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

		int one = 0 ;

		int one_c = _val( NULL );

		int two = 0 ;

		int d = 0 ;

		while ( one < one_c ) {

			two  = one ;

			while ( two ) {
			
				printf("  ");

				two-- ;

				}
			
			two = one_c - one ;

				while ( two ) {

					printf("* ");

					two -- ;
	
				}

				one++ ;

				puts("") ;
			
		}

		return 0 ;

}

