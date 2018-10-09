#include	<stdio.h>

int main ( void ) 
{
	char buf[20] ;

	long off = 0 ;

	FILE *fp = fopen ( "somefile.noext" , "r" ) ;

	perror("open status");

	printf ( "address is %p\n" , fp -> _IO_read_ptr ) ;
	
	fread ( buf , 1, 3 , fp ) ;

	perror("read status");
	
	printf ( "address is %p\n" , fp -> _IO_read_ptr ) ;

	off = ftell ( fp ) ;
	
	perror("tell status");

	printf("offset is %ld\n" , off);


	return 0 ;

}

	
