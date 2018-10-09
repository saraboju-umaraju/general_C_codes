/*
 * binary searching
 */

#include"header.h"

extern int n;   //number of element
extern int gv;  //global variable for int validation

int bin_search(int *arr, int num)
{
    int low = 0;    /*minimun amd max index of an array*/
    int high = n-1;
    int mid = 0;
    int index = -1;
  

    while(low <= high){

        mid = ((low + high)/2);

        if(arr[mid] == num){
            index = mid;
          
            break;
        }
        else{
            if(arr[mid] < num){
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

       
    }

    return index;
  
    
}

void binary_search(void)
{

    int *arr;   //array to hold the input array
    int num;
    int res = 0;

    arr = (int *)malloc(n * sizeof(int));

    arr = merge_sort();

    printf("Enter the number which you want to search:\n");

    num = intval_input();

    if(gv == -1 && num == -1){
        printf("Invalid number\n");
        exit(1);
    }


   res = bin_search(arr, num);

   if(res == -1)
       printf("%d not found in a given array\n",num);
   else
       printf("%d is found in an array\n",num);
}



