#include	<stdio.h>

#include	<string.h>

void word_rev ( char *str ) 
{
		int len = strlen ( str ) -1 ;

		int one = 0 ;

		while ( one < len ) {

				str[ one ] = str [one] ^ str [ len ] ;

				str[ len ] = str [one] ^ str [ len ] ;

				str[ one ] = str [one] ^ str [ len ] ;

				one++ ;

				len-- ;

		}

}
