#include	<stdio.h>

int main ( void ) 
{
	unsigned long int x = 2886731159 ;

	printf ("%u\n" , x & 0x000000ff ) ;
	
	printf ("%u\n" , ( x  & 0x0000ff00 ) >> 8) ;
	
	printf ("%u\n" , ( x  & 0x00ff0000 ) >> 16 ) ;
	
	printf ("%u" , 	( x &  0xff000000 ) >> 24 ) ;

	printf ("%d\n" ,  0xffffffdc ) ;
	return 0 ;

}
