

#include        "../header/head.h"

void i_sort(int *arr, int size)
{
		int i, temp, j;
		for (i = 1; i < size; i++)
		{
				temp = arr[i];
				j = i-1;

				while (j >= 0 && arr[j] > temp)
				{
						arr[j+1] = arr[j];
						j = j-1;
				}
				arr[j+1] = temp;
		}
}
