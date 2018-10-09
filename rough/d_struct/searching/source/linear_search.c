/*
 * linear searching
 */

#include"header.h"

extern int n;   //number of element
extern int gv;

void search(int *arr, int num)
{
    int i;
    int j = 0;
    int cnt = 0;
    int temp[n];
    for(i = 0; i < n; i++){

        if(arr[i] == num){
            temp[j++] = i;
            cnt++;
        }
    }

    if(cnt == 0)
    printf("number not found\n");


    printf("%d found %d times in an array\n",num,cnt);

    for(i = 0; i<cnt; i++)
        printf("Number found at arr[%d] postion\n",temp[i]);

}

void linear_search(void)
{

    int *arr;   //array to hold the input array
    int temp;

    arr = (int *)malloc(n * sizeof(int));

    arr = input_array();

    display(arr, n);

    printf("Enter the number which you want to search:\n");

    temp = intval_input();

    if(gv == -1 && temp == -1){
        printf("Invalid number\n");
        exit(1);
    }

    search(arr, temp);
}



