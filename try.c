#include	<uma.h>

#include	<string.h>

int main ( void ) 
{
	char str[] = "abcd" ;

	char *one = str + strlen ( str )  - 1 ;

	char *two = str  ;

	int flag = 0 ;

	int flag2 = 1 ;

	system("clear");

	while ( one != str || flag2-- ) {
		
		if ( ! *two || two == one  ) {

			flag-- ;

			one =  str + strlen ( str )  - 1 + flag ;

			two = str ;

			printf("\n\n");

		}

		SWAP ( *one , *two ) ;

		puts(str);	

		SWAP ( *one , *two ) ;

		two ++ ;


	}

}	
