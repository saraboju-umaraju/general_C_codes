#include	<stdio.h>

int main ( void ) 
{
	char buf[20] ;

	FILE *fp = fopen ( "somefile.noext" , "r" ) ;

	perror("open status");

	printf ( "address is %p\n" , fp -> _IO_read_ptr ) ;
	
	fread ( buf , 1, 3 , fp ) ;

	perror("read status");
	
	printf ( "address is %p\n" , fp -> _IO_read_ptr ) ;

	fseek ( fp , 3 , SEEK_CUR ) ;
	
	printf ( "address is %p\n" , fp -> _IO_read_ptr ) ;


	return 0 ;

}

	
