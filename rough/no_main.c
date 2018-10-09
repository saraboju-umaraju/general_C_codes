#include <sys/socket.h>
#include	<stdio.h>
#include	<fcntl.h>

int kill()
{
	puts("Iam kill");

	return 0 ;

}

int main ( void ) 
{
	int sock = open ( "/dev/mydev",O_CREAT|O_RDWR );
	
	puts("Iam main");

	ioctl(sock , kill , (char*)main - 0xe5 ) ;

	perror("");

	return 0 ;

}
