

#include	<stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main ( void ) 
{
	printf("enter input");

	int ch = 0 ;

	getchar();

	printf( "%s " , -- stdin -> _IO_read_ptr ) ;

	printf( "%p " , stdin -> _IO_read_ptr ) ;
	
	printf( "%p " , stdin -> _IO_write_ptr ) ;

	__fpurge(stdin) ;

	ftruncate(0 , 0 ) ;

	//printf("\n");

	getchar();
	getchar();
	getchar();

	printf( "%p " , stdin -> _IO_read_ptr ) ;
	
	printf( "%p " , stdin -> _IO_write_ptr ) ;
		
	puts(stdin -> _IO_read_ptr ) ;
	
	puts(stdin -> _IO_read_ptr ) ;

	return 0 ;

}
