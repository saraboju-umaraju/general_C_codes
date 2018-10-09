#include    <uma.h>

int main (void) {

		//		char *arr[] = { 1,2,3,4,5,6,7,8,9 };

		int i = 0;

		int  j = 0;

		int k = 0 ;

		int l = 0;

	/*	for ( i = 0 ; i < 5 ; i ++ ) {

				for ( j = i  ; j <  5 ; j ++ ) {

						for ( k = 0  ; k < j ; k ++ ) {


								printf("*");

						}printf(" ");

				}printf("\n");

		}*/

		for(i = 0; i < 5; i++){

				for(j = 0; j < 5 ; j++){

						for(l = 0; l <= k; l++){

								printf("%c",'*');

						}

						printf("\t");

				}
				
				k++;

				printf("\n");

		}
}
