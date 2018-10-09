#include	"../header/head.h"

int main(/*int *a, int low, int mid, int high*/)
{
		int a[]={2,4,6,8,10};
		int b[]={1,3,5,7};
		int i=0,j=0,k=0;

		int AS=(sizeof(a)/sizeof(a[1]));
		int BS=(sizeof(b)/sizeof(b[1]));
		int CS=AS+BS;
		int c[CS];

		for(k=0 ; i < AS && j < BS  ; k ++ ){

				if( a[i] < b[j] ){

						c[k] = a[i++];

				}
				else{

						c[k] = b[j++];

				}
		}
		if(i==AS  ){
				for( ; j < BS ; j++,k++ )
						c[k] = b[j];
		}
		else{

				for( ; i < AS ; i++,k++ )
						c[k] = a[i];

		}



		for( k=0 ; k < AS+BS ; k++ )
				printf("%d ",c[k]);
}

