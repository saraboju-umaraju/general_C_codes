#include	<stdio.h>

#include	<string.h>

#include	<stdlib.h>

char *temp ;

char* print ( char * ) ;

int main ( void ) 
{
		char *buf ;

		int usable = 0 ;

		if ( NULL == (buf = (char*) malloc ( 200 ) ) ) {

				perror("malloc"); 

				exit ( EXIT_FAILURE ) ;

		}
	
		temp = buf ;

		puts("enter any useless message");

		fgets ( buf , 199 , stdin ) ;

		while ( *( buf + usable ) ) {

				if ( * ( buf + usable ) == ' ' || * ( buf + usable ) == '\n' ) {

						* ( buf + usable ) = '\0' ;

						while ( * ( buf + usable + 1 ) == ' ' ) usable ++ ;

					//	word_rev ( buf );

						printf("%s " , buf) ;

						buf = buf + usable + 1 ;

						usable = 0 ;

				}

				usable++  ;

		}

		puts("");

		free ( temp ) ;

		return 0 ;

}	

