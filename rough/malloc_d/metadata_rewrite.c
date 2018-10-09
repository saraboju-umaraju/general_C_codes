#include	<malloc.h>

int main ( void ) 
{
	int *p = malloc  ( 10 ) ;
	
	printf("%d\n", *(p + 3));

	* ( p + 3 ) = 150 ;
    
	free ( p );
	
	printf("%d\n", *(p + 3));
	
	int *q = malloc  ( 12 ) ;
	


	printf("%s\n", q);


}
