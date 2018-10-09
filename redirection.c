#include	<stdio.h>

int main  ( void ) 
{
	FILE *fp = fopen  ( "stdin" , "r") ;

	perror("open");
		
	char ch = 0 ;

	//printf("%p\n" , stdin) ;

	getchar() ;

	//stdin -> _IO_read_ptr = fp -> _IO_write_ptr ;
	
//	stdin -> _IO_read_ptr = "dabbannaradabbaZ" ;
	
	//printf("%p\n" , stdin) ;

	while ( 'Z' != (ch = getchar() ) ) {

				putchar(ch) ;

		}

	return 0 ;

}
