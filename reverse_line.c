#include	<stdio.h>

#include	<stdlib.h>

int count = 0 ;

int main ( void ) 
{
		char buf[200] = "" ;

		fgets ( buf , 100 , stdin ) ;

		buf [ strlen ( buf ) - 1 ] = '\0' ;

		rev_line ( buf ) ;

		return 0 ;

}

int rev_line ( char *buf ) 
{
		char a[ 200 ] = "" ;

		int usable = 0 ;

		int j = 0 ;

		char *temp = buf ;

		while ( * (buf + usable )  ) {

				if  ( * ( buf + usable ) == ' ' ) {

						count = usable-- ;

						do {

								printf("%c", * ( buf + usable ));

						}while ( usable-- );

						buf = buf + count + 1  ;

						usable = 0 ; continue ;

				}
				usable++ ;

		} printf("%s",buf);

		printf("\n");
}


