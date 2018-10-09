#include	<stdio.h>

int main ( void )
{
	char *str = "killerwhale" ;

	int x = strlen ( str ) - 1 ;
	
	char *ptr = str + x ;

	//while ( ptr != str ) {	printf("%c", *ptr--); }

	do {

		 printf("%c", *(str + x )) ;

		}while ( x-- ) ;

	return 0 ;

}
	
