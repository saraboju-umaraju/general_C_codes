#include	<stdio.h>

int main ( void ) 
{
	int temp = 0 ;

		FILE *fp = fopen ( "somefile.noext" , "w" ) ;

		char * ptr = (char*) malloc ( 120 ) ;

		fscanf ( stdin , "%s" , ptr ) ;

		puts( ptr );

		return 0 ;

}
