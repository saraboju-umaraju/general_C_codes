#include<stdlib.h>
main()
{

char *p;

	do{
	p = malloc(1024);
	printf("%d\n",getpid());
	}while ( p ) ;

}
