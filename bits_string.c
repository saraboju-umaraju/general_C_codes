#include	<stdio.h>

int main ( void ) 
{
		char *str = "dabba" ;

		int count = 0 ;

		while ( *str ) {

				count = count + count_bits ( *str ) ;

				str++ ;

		}

		printf("the count is %u bits\n" , count);

		return 0 ;

}

int count_bits ( int ch ) 
{
	int count = 0 ;

	while ( ch ) {
	
			ch &= ( ch-1 ) ;
			
			count++ ;

		}

		return count ;

}
