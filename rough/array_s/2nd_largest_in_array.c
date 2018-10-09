#include	<stdio.h>

int main ( void ) 
{
	int a[11] = { 44 ,10 ,3 ,4, 33, 6, 1, 8, 9, 10 , 11 } ;
	
	int i = 0 ;

	int ele = a[0] > a[1] ? a[0] : a[1] ;

	int ans = a[1] > a[0] ? a[0] : a[1] ;

	printf("ele %d ans %d \n" , ele , ans);
			
	for ( i = 2 ; i < 11 ; i++ ) {

			if ( ele < a[ i ] ) { 
		
				ans = ele ;
			
				ele = a[i] ; 
		
				}

			else if ( ans < a[i] ) { 

				ans = a[i] ; 

			} 

		}

	printf ("2nd largest %d\n" , ans) ;

	return 1 ,2 ;

}
