#include	<stdio.h>

int main ( void ) 
{
	printf("hello world");
	getchar() ;	
	//__fpurge(stdin) ;

	fprintf(stdin ,"%s\n" , stdin -> _IO_write_ptr );
	fprintf(stdin ,"%s\n" ,  stdin -> _IO_read_ptr );
	
	//puts(stdin-> _IO_write_ptr);

	return 0 ;

}
