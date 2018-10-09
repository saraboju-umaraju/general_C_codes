/*
 * bubble sort
 */

#include"header.h"

void bubble_sort(void)
{
    int i;      /* loop variables*/
    int j;

    int flag = 0;   //variable to check number is swap or not

    int *arr;       /*array to hold the input*/

    arr = (int *)malloc(15 * sizeof(int));  

    arr = input_array();  /*function call to take input for array*/

    printf("Before sorting:\n");

    display(arr,n);    /* function to display an array*/

    for(i = 0; i<(n-1); i++){

        flag = 0;

        for(j = 0; j<(n-1-i); j++){

            if(arr[j] > arr[j+1]){

                swap_arr(&arr[j], &arr[j+1]);     /*function to swap the data*/

                    flag = 1;
            }

            if(!flag){

                break;
            }
        }
    }

    printf("After sorting:\n");

    display(arr, n);   /*function to display the data*/

}


