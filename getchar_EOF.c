#include	<stdio.h>

#include	<errno.h>

int main ( void ) 
{
	puts("enter a character");

	errno = getchar();

	perror("status");

	return 1;

}
