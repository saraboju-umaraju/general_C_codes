#include	"../header/head.h"

void merge(int *c, int low, int mid, int high)
{
		int i, j, k;
		int AS = mid - low + 1;
		int BS =  high - mid;
		int a[AS];
		int b[BS];
		for(i = 0; i < AS; i++)

				a[i] = c[low + i];

		for(j = 0; j < BS; j++)

				b[j] = c[mid + 1 + j];

		i = 0;

		j = 0;

		k = low;



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



		/*for( k=0 ; k < AS+BS ; k++ )
		  printf("%d ",c[k]);*/
}
void m_sortt(int arr[], int low, int high)
{
		if (low < high)
		{
				int mid = low+(high-low)/2; 
				m_sortt(arr, low, mid);
				m_sortt(arr, mid+1, high);
				merge(arr, low, mid, high);
		}
}

