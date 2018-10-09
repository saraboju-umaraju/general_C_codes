#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/mman.h>
#include	<fcntl.h>
void _hand ( int signo ) {

		printf("just caught SIGBUS siganl \n");

		exit ( 0 ) ;                                  		/* otherwise loops infinitely here */ 

}
int main()  
{

		signal (SIGBUS , _hand ) ;  	
			/* registering custom handler with kernel */

		char buffer[100] ;

		FILE *fd = fopen("./file.txt", O_RDWR);
		fread ( buffer , 100 , 1 , fd )  ;
		int *m ;
		
		printf("address= %08x\n", m);
		
		//m = mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fd, 0);  	/* mapping 4len bytes of data with flags to tmpfile() */ 
	
		m = mmap(0, 4, PROT_WRITE,MAP_SHARED, fileno(fd), 0);  		/* mapping 4len bytes of data with flags to tmpfile() */ 
	
		printf("address= %08x\n", m);
	
		printf("pid= %d\n", getpid());

		//ioctl(fd, m);
		
		*m = 0;   						/* this instruction causes bus error */

	
		
		return 0;
}

