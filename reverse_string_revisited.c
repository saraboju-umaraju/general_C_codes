#include	<stdio.h>

#include	<stdlib.h>

#include	<string.h>

#define SIZE 100

char str[200];

char* str_rev ( char* );

int main ( void )
{
	char buf[SIZE+1] = "" ;

	puts("well! enter a string");

	if ( NULL == fgets(buf , SIZE , stdin ) )	{

		printf("error reading input\n");

		exit ( EXIT_FAILURE );

	}

	buf [ strlen ( buf ) - 1 ] = '\0'; 

	printf("reversed string is %s\n", str_rev ( buf ));	

	return 0 ;

}

char* str_rev ( char* str2 )
{
	int count = strlen ( str2 ) ;

	if  (! *str2 ) return NULL ;
	
	while ( count )

	str[count-- -1] = *str2++;

	return str; 

}
