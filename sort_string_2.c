#include	<stdio.h>

#include	<string.h>

int main  ( void ) 
{

	char *v[] = { "abcd" , } ;

	typeof(v) new_arr ;

	int index = 0 ;

	int new_in = 0 ;

	int lone = 0 ;

	int ltwo = 0 ;

	int max_len = 0 ;

	max_len = strlen ( v[0] ) ;

	for ( lone = 1 ; lone < 5 ; lone++ ) {

			if ( strlen ( v[lone] ) > max_len ) {
		
					max_len = strlen ( v[lone] ) ;

				}
		}

	for ( lone = 0 ; lone < 5 ; lone++ ) {

				ltwo = lone + 1 ;

				index = lone ;

			//for ( ltwo = lone + 1 ; ltwo < 5 ; ltwo ++ ) {

					if ( *v[lone] > *v[ltwo] ) {
		
							index = ltwo ;

						}

						new_arr[ new_in++ ] = v[index] ;

				//}

		}

		for ( lone = 0 ; lone < 5 ; lone++ ) 

				puts(new_arr[lone]) ;

		return 0 ;
}
