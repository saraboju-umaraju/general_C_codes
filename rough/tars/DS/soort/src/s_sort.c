#include "../header/head.h"

void s_sort(int *a,int size)
{
int outer=0;

int inner=0;
	
int temp=0;

 for(outer=0 ; outer <size-1 ; outer++){

                for(inner= ( outer+ 1 ) ; inner < (size) ; inner++){

                        if(a[ outer ] > a[ inner]){

                                temp = a[outer];

                                a[outer] = a[inner];

                                a[inner ]= temp;

                        }
                }

        }

	
}
