#include	<stdio.h>

int main ( void ) 
{
	char str[] = "_hello_world_";

	printf( "string length is %zu\n" , strlen_r ( str ) )  ;

	return 0 ;

}

int strlen_r ( char * str ) 
{
	int count = 1 ;

	if ( ! *str ) return 0 ;

	count +=strlen_r ( str + 1 ) ;

	return count ; 

	}	

	
