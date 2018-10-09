#include	<stdio.h>

#include	<string.h>

int main ( char c , char *v[] ) 
{
		int arr[ c-1 ] ;

		int temp = 0 ;

		int max = 0 ;

		while ( temp < c-1 ) { 

				arr[temp] = strlen( v[temp + 1 ] ) ;

				if ( arr[temp] > max ) max = arr[temp] ;

				temp++;

		}

		while ( max ) {

				temp = 0 ;

				while ( temp < c - 1 ) {

						if ( arr[temp] >= max ) 

								printf("* ");

						else printf("  ");

						temp++ ;

				}puts("");

				max--;}

}
