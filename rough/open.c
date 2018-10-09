#include	<stdio.h>

int main ( void ) 
{
	int sta = open(NULL , 0);

	printf( "%s\n" , strerror ( sta ) ) ;

	perror("");

}
