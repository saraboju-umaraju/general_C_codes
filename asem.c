#include<stdio.h>

void main() {

		int a = 3, b = 3, c;

		__asm__ (
						"mov ax,a \n"
						"mov bx,a \n" 
						"add ax,bx \n"
						"mov c,ax \n"
				);

		printf("%d",c);
}
