#include    <stdio.h>
int main (void) {
		int i=0;
		while(1) {
				sleep (1) ;
				i++;
				printf("i: %d\n ",i);
				if(i==3) {
						break;
				}
				main();
		}
		return 0;
}
