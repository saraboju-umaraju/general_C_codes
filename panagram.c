#include	<stdio.h>

int main ( void ) 
{
		FILE *fp = fopen ("somefile", "r" ) ;

		if ( ! fp ) {

				perror("opening file");

				return 1 ;

		}

		int i = 0 ;

		char ch = 0 ;

		while ( i != 26 ) {

				if ( ( ch = fgetc(fp) ) == EOF ) 

						break ;

				if ( ( ch - 65 ) == i || ( ch - 97 ) == i ) {

						i++ ;

						rewind (fp) ;

						continue ;

				}

		}

		if ( i==26 ) puts("panagram"); else  printf("not panagram %c is missing \n" , i + 65);

		return 0 ;

}


