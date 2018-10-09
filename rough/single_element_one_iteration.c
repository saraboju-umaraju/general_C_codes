#include	<stdio.h>

int main (void ) {

		int a[9] = { 3,4,1,3,1,7,2,2,4};

		int temp = 0 ;

		int i = 0;

		for(i = 0 ; i < 9 ; i++ )

				a[i]^=a[i];

		printf("%d\n",a[i]);
}
