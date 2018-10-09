    #define _GNU_SOURCE

#include <stdio.h>
#include <sys/syscall.h>
#include <signal.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>


pid_t global_ID;

void _hand (int x)
{
	printf("handler");
}


void *th_func(void *data)
{

	global_ID = syscall(SYS_gettid);	
	
	signal(SIGUSR1,_hand);
	perror("signal");

	while(1) {
		printf("got signal");
		//sched_yield();
	}
}


int main (int argc, char *argv[])
{

	pthread_t thID;
	

	pthread_create(&thID,NULL,th_func,NULL);

	while(1) {
		sleep(2);
		syscall ( SYS_tgkill ,getpid() , global_ID , SIGUSR1 ) ;
		perror("syscall");
	}

	return 0;
}

