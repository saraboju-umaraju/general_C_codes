/*
 * fuction is to take array input
 */
#include"header.h"

extern int gv;          /* global variable for int validation*/
extern int n;               /* number of element*/

int *input_array(void)
{
//    int n;      // number of element
    int *arr;   // array to hold the variable
    int i;      // loop variable

    printf("Enter how many elements you want to enter:\n");
    n = intval_input();     // calling a function to take integer input

    if(gv == -1 && n == -1){
        printf("Invalid input\n");
        return 0;
    }

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d element\n",n);

    for(i = 0; i<n;i++){

        arr[i] = intval_input();

        if(gv == -1 && arr[i] == -1){
            printf("Invalid input\n");
            return 0;
        }
    }

    return arr;
}

