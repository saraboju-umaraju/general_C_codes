#include	<stdio.h>

#include	<unistd.h>

int main ( void )
{
	ioperm(0x60 , 6 , 1);

	inb(0x60) ;

}
