#include"../header/head.h"

void quick_sort(int *num , int low, int high)
{
	if(low < high){
	
	int pivot = *(num + low);

	int i = low + 1;

	int j = high;
	
	int temp;

	while(1){

	while( pivot > *(num + i) && i <= high)

			i++;

	while( pivot < *(num + j) && j >= low)

			j--;

		if(i < j){

				temp = *(num + i);

				*(num + i) = *(num + j);

				*(num + j) = temp;
			}

		else

			break;

	}

	*(num + low) = *(num + j);

	*(num + j) = pivot;

	quick_sort(num , low, j - 1);
	
	quick_sort(num ,j + 1, high);
		
	}
//    disp(num);

}
