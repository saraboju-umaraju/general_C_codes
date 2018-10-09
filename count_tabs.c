#include	<stdio.h>

int main ( void ) 
{
	int ch = 0 ;

	int tab = 0 ;

	int line = 0;

	int space = 0 ;

	FILE *fp = fopen ( "file" , "r" ) ;

	while ( EOF != (ch = fgetc(fp) ) ) {
		
			if ( ch == '\t' ) tab++;

			else if ( ch == '\n' ) line++ ;

			else if ( ch == ' ' ) space++;

		}

	printf(" tabs %d\n new lines %d\n spaces %d\n", tab , line , space);

	return 0 ;

	}
