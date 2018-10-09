#include	<uma.h>

int l_search(int *a, int c, int key)
{
		int xx=0;
		
		int d[c];
		
		int i=0;
		
		int j;
		
		for( i=0 ; i < c ; i++){

				if( a[i] == key ){

						d[j++]=i;
						xx++;

				}
		}

		if(j==0){
				printf("the element you entered was not in list\n");

		}
		else{


				printf("i found the element in list %d times\nand is at index ",j);


				for( i=0 ; i < xx ; i++){

						printf(" %d ",d[i]);

				}
		}
		return 0;
}
