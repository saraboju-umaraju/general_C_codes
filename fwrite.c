#include	<stdio.h>

#include	<string.h>

int main ( void ) 
{
	int i = 123456;

	printf("%x",i);
	FILE *fp = fopen ( "/tmp/fwrite" , "w" ) ;

	perror("open status");

	char ptr = '123'  ;

	printf("len is %zu\n" , strlen ( ptr ) ) ;

	fwrite  (&ptr , 1 , 1 , fp ) ;

	perror("fwrite status");

	return 0 ;

}
