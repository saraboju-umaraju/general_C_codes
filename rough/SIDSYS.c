#include	<uma.h>

#include	<signal.h>

void _hand ( int s_no ) {

	puts("iam a handler");

}

int main ( void ) {

//	signal ( 31 , _hand ) ;

	getchar();

	return 0;

}
