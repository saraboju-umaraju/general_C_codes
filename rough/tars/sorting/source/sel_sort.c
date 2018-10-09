#include	<stdio.h>

#include	<uma.h>

int main ( void ) 
{
		int a[] = { 6, 7 , 4, 2 ,5 ,9 , 1} ;

		int i = 0 ;

		int j = 0 ;

		int min = 0 ;

		for ( i = 0 ; i < ARRELE(a) - 1; i ++ ) {

				min = i ;

				for ( j = i + 1 ; j < ARRELE(a)  ; j++) {

						if ( a[min] > a[j] ) min = j;

						printf("min in jth rot %d %d\n",min ,j);

				}

				SWAP( a[min] , a[i] ) ;
		}




		for ( i = 0 ; i < 7 ; i++ )

				printf("%d  ",a[i]);

}
