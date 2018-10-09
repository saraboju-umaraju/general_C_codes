#include	<stdio.h>
#include	<_val.h>

int main ( void ) 
{
	unsigned int x = _val();

	int count = 0 ;

	if ( !x ) { puts("no set bits"); exit (1); } 

/*	printf("val is %d\n", x^ (x & (x-1)));

	x =  x^ (x & (x-1)) ;
	
	if ( x != 1 )

	while ( x >>= 1 ) count = - ( ~count ) ; */

	count = right_most_pos ( x ) ;

	printf("set bit position is %u (assuming index starts from 0)\n",count);

}
int right_most_pos ( unsigned int x )
{
	int count = 0 ;
	
	if ( ( x & -x ) == 1 )

	return count ;

	else { 
	
		x = ( x & -x ) ;

		while ( x >>= 1 ) count++ ;

		return count ;

}
}
