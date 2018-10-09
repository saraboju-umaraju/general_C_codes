#include	<stdio.h>

int main ( void ) 
{

                unsigned int cr3 = 0 ;

                asm volatile ( "mov %%cs , %0": "=r"(cr3) ) ;

                printf ("%08x\n" , cr3) ;

				return  0 ;
}
