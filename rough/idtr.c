#include <stdio.h>

struct desc_ptr {
        unsigned short size;
        unsigned long address;
} __attribute__((packed)) ;



int main() 
{

	unsigned char idtr;

//	asm("sgdt" :: "=r" (idtr));

//	asm volatile("sgdt %0":"=m" (idtr));

/*	int index = 0 ;

	while ( index < 6 ) 

		printf("%X" , idtr[index++]);
	*/

	struct desc_ptr gdt , idt  ;

	asm volatile("sgdt %0":"=m" (gdt));

        asm volatile("sidt %0":"=m" (idt));

	unsigned long tr ;

        asm volatile("str %0":"=r" (tr));

	return 0 ;
}

