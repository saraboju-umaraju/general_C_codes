#include    <uma.h>
int main (void) {

		int i;
		int j;
		int k = 0;

		for ( i = 1 ; i < 7 ; i ++ ) {

				for ( j = 1 ; j < i ; j ++ )  {


						for ( k = 0 ; k <j  ; k ++ )  {

								printf("*");
						}
						printf("\t");

				}
				printf("\n");
		}

}
