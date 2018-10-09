#include	<stdio.h>

static int some = 0;

int inline prime_or_not ( int num ) {

	int loop = 2 ;

	while ( loop <= (num/2) ) {

		if ( ! ( num % loop ) ) return 1 ;

		loop++ ;
	}

	some++ ;

	return 0 ;

}

int main ( void ) 
{

	int loop = 2 ;

	int limit = 9999999;

	loop = 3 ;

	int num = _val("how many`");

	if ( num < 0 ) return 1 ;

	while ( loop < limit ) {

		if ( ! prime_or_not ( loop ) ) printf("%3d\n" , loop);

		if ( some == num ) return 0 ;

		loop++ ;

	}

	return 0 ;

}
