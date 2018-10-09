/*
 * merge sort
 */

#include"header.h"

extern int n;


void merging(int *arr,int low, int mid, int high)
{

    int temp[n];        /*temp array to store the sorted array result*/
    
  //  arr = (int *)malloc(n*sizeof(int));
    int i;              /* loop variable*/
    int j;
    int k;

    i = low;
    j = mid + 1;

    for(k = low; (i <= mid && j <= high) ; k++){
       

            if(arr[i] <= arr[j])
                temp[k] = arr[i++];
            else
                temp[k] = arr[j++];
       
    }

    while(i <= mid)
        temp[k++] = arr[i++];
    while(j <= high)
        temp[k++] = arr[j++];

    for(k = low; k<=high; k++)
        arr[k] = temp[k];
}

void divide_array(int *arr,int low, int high)
{
    int mid = 0;


    if(low < high){

         mid = ((low + high)/2);

         divide_array(arr,low,mid);
         divide_array(arr,mid+1, high);

         merging(arr,low, mid, high);
    }
}

void merge_sort(void)
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

    divide_array(arr,low, high);

    printf("After sorting:\n");

    display(arr, n);   /*function to display the data*/

}


