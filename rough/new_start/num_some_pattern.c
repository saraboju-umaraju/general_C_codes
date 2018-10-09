#include    <uma.h>
int main (void) {

		int i;
		int j;
		int k = 0;
		int l = 0;
		int m ;

		int a[]= {1,2,3,4,5,6,7,8,9};

		for ( i = 0 ; i < 9 ; i ++ ) {

				for ( j = 0 ; j < i ; j ++ ) {
				
						for ( k = 0 ; k < j ; k ++ ) {
						
								for ( m = 0 ; m < k ; m ++ ) 

						printf("%d",a[k]);

						}printf("\n");

				}printf(" ");

		}printf("\n");

}
