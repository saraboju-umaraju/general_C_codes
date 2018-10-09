#include <stdio.h>
#include <fcntl.h>

int x = 10;
int main ()
{
	int fd;
	fd	=	open ("/dev/myChar2",O_RDWR);

	printf("%d",getpid());

	printf("\nthe value before page walk: %d  %p\n", x, &x);

	if (fd < 0)

		perror ("Unable to open the device\n");

	else 

		printf ("File opened Successfully %d\n", fd);

	
	ioctl(fd,getpid(), &x);

	printf("the value after page walk : %d\n", x);
	
	close (fd);

	return 0;	
}



