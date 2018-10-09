#include	<stdio.h>

int main ( void ) 
{
	remove ( "rename.c" ) ;

	perror("remove status");
	
	return 0 ;

}
