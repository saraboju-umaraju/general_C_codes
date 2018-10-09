#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <unistd.h>
#include <sys/syscall.h>   /* For SYS_xxx definitions */

//int syscall(int number, ...);

int main ( void ) 
{
	syscall( 4 , 1 , "umaraju" , 8 ) ;

	return 0 ;

}

