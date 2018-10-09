#include	"../header/head.h"

void merge(int *arr, int low, int mid, int high)
{
    int i, j, k;

    int AS = mid-(low + 1);

    int BS =  high-mid;

    int a[AS], b[BS];

    for(i = 0; i < AS ; i++)
	
        a[i] = arr[ low + i ];

    for(j = 0; j < BS; j++)

        b[j] = arr[mid + 1 + j];

    i = 0;

    j = 0;

    k = low;

    while (i < AS && j < BS)
    {
        if (a[i] <= b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
            
        }
        ;
    }

    while (i < AS)
    {
        arr[k++] = a[i++];
        
    }

    while (j < BS)
    {
        arr[k++] = b[j++];
        
    }
}

void m_sortt(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low+high)/2; 
        m_sortt(arr, low, mid);
        m_sortt(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

