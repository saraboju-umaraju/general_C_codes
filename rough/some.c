

#include <stdbool.h>
#include <stddef.h>
 #include <sys/io.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>


/**
 * PS/2 keyboard code.
 * Dependencies:
 * inb function and scancode table.
 */

char *addr ;
char getScancode() {
	volatile unsigned char c = 0;
	do {
		//if (inb(0x60) != c){	
//			outb(0x61 , inb ( 0x60 ) + 1 );
			//print_key ( inb(0x61) );
			insb(0x61 , &addr , 2 );
			if ( addr )
			printf("%x\n",addr);
//			outb(0x60 , c+2);
			//printf("%d %c %d\n" , inb(0x60) , inb(0x60)-128 , inb(0x60));
			sleep(1);
	//		if (c > 0)
	//			return c;
	//	}
	} while(1);
}
int main ( int argc, char **v ) {

    ioperm(0x60 , 10 , 1 ) ;
	//addr = malloc(10);
	//getScancode();
    outb(0xed,0x60);   
    usleep(1);
    char ch=inb(0x60);                               // read the ack response the keyboard                   
    usleep(1);
    printf("ack %x\n",ch);
   //while(1) {
	//__fpurge(stdin);
    outb(argc,0x60);                         // data control the bits
//	}


	
	printf(".");
	return  0;
}
