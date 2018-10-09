#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{
	int x = _val("loop num") ;

	system("clear");
	
	int i = 0 ;

	int j = 0 ;

	while ( i < x ) {
	
		j = 0 ; 

			while ( j <= i ) {

					printf("%d ", j++ + 1);

				}
				puts("");
		
		i++ ;

	}

	return 0 ;
}
