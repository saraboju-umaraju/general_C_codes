/*
 * selection sort
 */

#include"header.h"

void selection_sort(void)
{
    int i;      /* loop variables*/
    int j;

    int min = 0;   //variable to find min number

    int *arr;       /*array to hold the input*/

    arr = (int *)malloc(15 * sizeof(int));  

    arr = input_array();  /*function call to take input for array*/

    printf("Before sorting:\n");

    display(arr,n);    /* function to display an array*/

    for(i = 0; i < (n - 1); i++){

        min = i;

        for(j = i+1; j < n; j++){

            if(arr[min] > arr[j]){

                swap_arr(&arr[min], &arr[j]);     /*function to swap the data*/

          
            }
        }
    }

    printf("After sorting:\n");

    display(arr, n);   /*function to display the data*/

}


