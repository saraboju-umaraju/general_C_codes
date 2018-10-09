#include	<uma.h>

#include	<signal.h>

void _hand ( int sig_num ) {

	printf("caught sigtrap signal\n");

	exit ( 1 );

}

int main ( void ) {

	signal ( SIGTRAP , _hand );								/*registration of handler*/

//	asm volatile ( "int $0x80" );
	
	asm volatile ( "int $3" );								/*sure generates a trap signal*/

	return 199 ;

}
