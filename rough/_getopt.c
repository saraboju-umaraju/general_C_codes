//#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ( char c , char* v[] ) 
{
	int x ;

	while ( ( x = getopt( c , v, ":abc:") )!= -1) {
	
			printf("iam in\n%c\n" , x);
	
			//printf("%d\n",optind);

			if ( optarg ) printf("optstring is %s\n",optarg);
	
	}
	

	return 0 ;

}
