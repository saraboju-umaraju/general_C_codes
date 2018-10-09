#include	<stdio.h>

#include	<string.h>

int main ( void ) 
{
	FILE *fp = fopen ( "somefile.noext" , "r" ) ;

	perror("open status");
	
	char buf[200] = "" ;

	fread ( buf , 1 , 8 , stdin ) ;

	perror("fread status");

	puts(buf);

	rewind ( stdin ) ;
	
	perror("rewind");

	puts(stdin -> _IO_read_ptr);
	
	fread ( buf , 1 , 8 , stdin ) ;

	perror("fread status");

	puts(buf);


	return 0 ;

}
