#include    "../header/head.h"

int main(void)
{

		int i=0;

		int size=0;

		int ch=0;

		printf("enter how many elements you need\n");

		scanf("%d",&size);

		if(size<1){

				printf("okay! good bye\n");

				return 0;
		}

		int a[size];

		for( ; i<size ; i++ ){

				printf("enter %d th element\n",i+1);
				__fpurge(stdin);
				scanf("%d",&a[i]);

		}

			disp(a,size);
			i_sort(a,size);
			disp(a,size);
}

