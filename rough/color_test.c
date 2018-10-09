#include	<uma.h>

int main ( void ) {

		int k = 1 ;

		while ( k < 109 ) {

		printf ( "\x1b[%dm""iam a lab rat %d "Z"\n",k ,k ) ;
	
		k++;

		usleep(10000);
	
		}


}



