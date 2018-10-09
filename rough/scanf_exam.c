#include	<stdio.h>

int main ( void ) 
{
	unsigned long x = 0 ;

	scanf ( "%x" , &x ) ;

	perror("scanf");

	printf("%s\n",(char*)x);

	return 0 ;

}
