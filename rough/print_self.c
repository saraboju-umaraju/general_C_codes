#include	<stdio.h>

int main ( void ) 
{
	FILE *fp = NULL ;

	if ( ! ( fp = fopen ( __FILE__ , "r" ) ) ) {

		perror("opening file");
	
		return 1 ;
	
	}
	
	while ( !feof(fp) ) printf("%c" , fgetc(fp)) ;

	return  0 ;

}
