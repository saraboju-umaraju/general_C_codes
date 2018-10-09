#include	<uma.h>
#include	<signal.h>

		long x = 12 ;
void _ () {
	puts("handled");
	}

int main ( void )
{
	
		
	printf("%x  %d\n" ,&x , getpid());
	
		getchar();

		signal(2 , _ ) ;

//		sbrk(100000) ;
		
		perror("");

		getchar();

//		sbrk(100000) ;
		
		perror("");

		getchar();

}

