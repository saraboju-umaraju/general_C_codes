#include	<stdio.h>

int main ( void ) 
{
	FILE *in = fopen("in", "r") ;
	
	FILE *out = fopen("out", "w") ;

	int ch = 0 ;

	while ( ( EOF != ( ch = fgetc( in ) ) ) ) {

			if ( ch == ' ' ) {
	
			if ( ' ' == ( ch = fgetc( in ) ) ) {
	
			fseek ( in , -1 , SEEK_CUR ) ;	

			continue ;

			}

			else fputc ( ' ' , out ) ; 
			
			fseek ( in , -1 , SEEK_CUR ) ;
			

			}	else  fputc ( ch , out ) ;

		}

		out = freopen ("out", "r" , out) ;
	
		while ( ( EOF != ( ch = fgetc( out ) ) ) ) {

			if ( ch == ' ' ) fputc ( '\n' , stdout ) ;

			else fputc ( ch , stdout ) ;

		}

		fcloseall();

		return 0 ;

}
