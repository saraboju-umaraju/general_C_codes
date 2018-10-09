#include	<malloc.h>

int main ( void ) 
{
	char *p = malloc  ( 16 ) ;
	
	char *q = malloc  ( 16 ) ;

	free ( p );
	
//	free ( q );
	
	free ( p );
	
	free ( q );

	free ( p );

    free ( q );

    free ( p );

    free ( q );


}
