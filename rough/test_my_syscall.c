#include <sys/syscall.h>   

#include <uma.h>

#define MY_CALL 380

int main ( void ) 

{
		printf ("my syscall returned %d\n" , syscall( MY_CALL ) );

		return 0;

}
