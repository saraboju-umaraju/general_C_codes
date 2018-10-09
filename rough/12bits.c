#include	<stdio.h>

int main ( void )
{
	unsigned char left = 0xab;
	
	unsigned char right = 0xcd ;

	unsigned short x = right  ;

	x = x | ( left << 8 );

	printf("%x\n" , x&0x0fff);

	return 0;

}
