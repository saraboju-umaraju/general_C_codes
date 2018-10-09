#include    "../header/head.h"

void disp(int *a,int size)

{

		int i=0;

		printf("elements are\n[");


		for ( i=0 ; i < size ; i++ ){

				printf("%d , ",a[i]);

		}

		printf("\b\b]\n");

}

