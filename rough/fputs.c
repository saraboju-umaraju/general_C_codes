#include	<stdio.h>

int main ( void )
{
	char *p ="NULL" ;

	FILE *fp = fopen ( "kill" , "r" ) ;

	perror("status");
	
	printf("%d\n", fputs ( p , fp ) );

	perror("status");

	return 0 ;
}
