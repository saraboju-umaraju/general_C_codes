#include	<stdio.h>

int main ( void ) 
{
		char str[] = "ABABBBBBBAABB";

		char ch = 0 ;

		int variable = 0 ;

		int count = 0 ;

		ch = * (str + variable++ ) ;

		while ( * (str + variable ) ) {

				if ( ch == * (str + variable ) )  { * (str + variable ) = ' ' ; count++ ; variable++ ; continue ; }

				ch =  * (str + variable ) ; variable++ ;

		}

		printf("%d\n" , count) ;

		return 0 ;
}
