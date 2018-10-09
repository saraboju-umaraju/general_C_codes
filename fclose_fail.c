#include	<stdio.h>

int var = 3 ;

int main ( void ) 
{
	struct _IO_FILE *fp = fopen ( "somefile.noext" , "w" ) ;

	perror("open status");

	printf("hello world");

	while ( stdout -> _IO_read_ptr  ) {
	
	fputc ( * (stdout -> _IO_read_ptr ++) , fp ) ;

	}

//	fclose ( stdout ) ;

	fclose ( fp ) ;

	return 0;

}


