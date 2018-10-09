#include	<stdio.h>

int main ( void ) 
{

		int count = 0 ;

		while ( 1 ) {

				printf("count is %d\r" , count++ );

				fflush(stdout) ;

				usleep(10000) ;

		}

		return 0 ;

}
