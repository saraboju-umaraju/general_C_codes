#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{
	int count = _val ( "table times" );

	int count2 = count;

	while ( count2  ) {
	
		printf("%12d %12f\n" ,count2 , ( ( 1.8 * count2 ) + 32 ) ) ;

		count2--;

	}

	return 0 ;

}
