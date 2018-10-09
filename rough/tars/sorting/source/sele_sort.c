#include	<stdio.h>

int main ( void ) 
{
	int arr[7] = { 6, 7 , 3, 2 ,5 ,9 , 1} ;

	int i = 0 ;

	int j = 0 ;

	int min = 0 ;

	for ( i = 0 ; i < 7 ; i++ ) {
		
			min = i ;

			for ( j = i+1 ; j < 7  ; j++ ){ 

				if ( arr[ min ] > arr[ j ] ) {

						min = j ;


					}
	
					}
					printf("%d\n",arr[min]);

						arr[min] = arr[i] ^ arr[min] ;
						arr[i] = arr[i] ^ arr[min] ;
						arr[min] = arr[i] ^ arr[min] ;
}
		for ( i = 0 ; i < 7 ; i++ )
			
				printf("%d  ",arr[i]);

}
