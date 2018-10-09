#include	<stdio.h>

#include	<string.h>

#include	<stdlib.h>

char *temp ;

static int count ;

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

						print( buf );

						buf = buf + usable + 1 ;

						usable = 0 ;

				}

				usable++  ;

		}

		free ( temp ) ;

}	

char* print ( char *str ) 
{
		
		puts(str);

		int count  ;

		int temp = 0 ;

		char arr [ 20 ] = {}  ;
	
		count = strlen ( str ) ;


//		printf("strlen is %zu\n" , count ) ;
	
		do { 

			arr [ temp++ ] = (* ( str + count  )) ;

			//printf("%c  %c", arr[temp] , *( str + count ));

			}while  ( count-- ) ;

//		printf ( "%s\n", arr ) ;

}

