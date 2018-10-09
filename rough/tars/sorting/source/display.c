/*
 * function to display an array
 */
#include"header.h"

void display(int *arr,int size)
{
    int i;    //loop variable

    printf("[");

    for(i = 0; i<size; i++){
         printf("%d, ",arr[i]);
    }
    printf("\b\b]\n");
}
    
