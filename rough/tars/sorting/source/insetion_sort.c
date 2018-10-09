/*
 * insertion sort
 */

#include"header.h"

void insertion_sort(void)
{
    int i;      /* loop variables*/
    int pos;    /* extract the position of  number*/
    int temp;   /* variable to hold the number which is taken from int array*/

   // int flag = 0;   //variable to check number is swap or not

    int *arr;       /*array to hold the input*/

    arr = (int *)malloc(15 * sizeof(int));  

    arr = input_array();  /*function call to take input for array*/

    printf("Before sorting:\n");

    display(arr,n);    /* function to display an array*/

    for(i = 1; i < n; i++){

        temp = arr[i];
        pos = i;

        while((pos > 0) && (arr[pos - 1] > temp) ){

            arr[pos] = arr[pos - 1];
            pos--;
        }

        if(pos != i)
             arr[pos] = temp;


        }
    

    printf("After sorting:\n");

    display(arr, n);   /*function to display the data*/

}


