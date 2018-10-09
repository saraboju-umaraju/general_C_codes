#include	<stdio.h>

#include	<stdlib.h>

#include	<string.h>

#define SIZE 100

char *entab( char * ) ;

int main ( void )
{
		char buf[SIZE+1] = "" ;

		puts("well! enter a string");

		if ( NULL == fgets(buf , SIZE , stdin ) )	{

				printf("error reading input\n");

				exit ( EXIT_FAILURE );

		}

		buf [ strlen ( buf ) - 1 ] = '\0'; 

		entab ( buf ) ;

		return 0 ;

}

char *entab ( char *str ) 
{
		int count = 0 ;

		while ( *str ) {

				if  ( *str == ' ' ) {

						count++ ;

						if ( count==4 ) { 

								count = 0 ; 

								putc('\t' , stdout);

						} 

				}

						else { while ( count ) { count-- ;putc(' ' , stdout);} putc(*str , stdout); }

						str++;
				}
				return "uma";
		}
