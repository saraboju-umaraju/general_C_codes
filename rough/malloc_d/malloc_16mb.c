#include    <stdio.h>
struct d{
		char s[1024][1024][16];
};
int main (void) {

		int c=0;
		
		int *p = NULL;
		
		do {
		
				p=malloc(sizeof(struct d) );
		
				c++;
	
			} while(p);

			printf("%d\n",c);
}
