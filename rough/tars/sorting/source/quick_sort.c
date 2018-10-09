/*
 * quick sort
 */

#include"header.h"

extern int n;

int partition (int *arr, int min, int max)
{
   
    int i;
    int j;
    int pivot;
    pivot = arr[min];
    i = min+1;
    j = max;

    while(1){

        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;

        if(i < j)

            swap_arr(&arr[i], &arr[j]);
        
        else
            
            break;
        }


    arr[min] = arr[j];

    arr[j] = pivot;
  //  swap_arr(&arr[min], &arr[j]);

   return j;

}

void quick(int *arr,int min, int max)
{
  
    int res;

    if(min < max){
        
      
        res = partition(arr,min,max);

        quick(arr,min, res -1);
        quick(arr,res + 1, max);
    }

}

void quick_sort(void)
{
   
    int low;
    
    int high;   /*array index*/

    int *arr;       /*array to hold the input*/

    arr = (int *)malloc(n * sizeof(int));  

    arr = input_array();  /*function call to take input for array*/

 
    printf("Before sorting:\n");

    display(arr,n);    /* function to display an array*/

    low = 0;

    high = n-1;

    quick(arr,low, high);

    printf("After sorting:\n");

    display(arr, n);   /*function to display the data*/
   
    free(arr);
}


