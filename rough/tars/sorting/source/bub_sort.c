#include	<stdio.h>

int main ( void ) 
{
	int arr[7] = { 6, 7 , 3, 2 ,5 ,9 , 1} ;

	int i = 0 ;

	int j = 0 ;

	for ( i = 0 ; i < 7 ; i++ ) 
		
			for ( j = 0 ; j < 7 - i ; j++ ) 

				if ( arr[j] > arr[j+1] ) {

						arr[j] = arr[j] ^ arr[j+1] ;
						arr[j+1] = arr[j] ^ arr[j+1] ;
						arr[j] = arr[j] ^ arr[j+1] ;

					}	

		for ( i = 0 ; i < 7 ; i++ )
			
				printf("%d  ",arr[i]);

}
