#include	<stdio.h>

#define _FILE_OFFSET_BITS 64

int main ( void ) 

{
	FILE *fp = fopen ( "somefile" , "w") ;

	while (1) {

		fputc('a' , fp) ;

		}	

	return 0 ;

}
