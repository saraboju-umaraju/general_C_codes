#include	"../header/head.h"
#include	<uma.h>
#include	<_val.h>
#define SIZE 10
int main(void)
{

		int i=0;

		int size=0;

		int ch=0;

		char buf[SIZE];

		printf("enter how many elements you need\n");

		__fpurge(stdin);
		fgets(buf,SIZE,stdin);

		size=intval(buf);

		if(size<1){
	
		printf("okay! good bye\n");
	
		return 0;
		}

		int a[size];

		for( ; i<size ; i++ ){

				printf("enter %d th element\n",i+1);
					__fpurge(stdin);
					fgets(buf,SIZE,stdin);
					a[i]=intval(buf);

		}

		
		printf("which sort you wanna perform\n1.bubble sort\n2.selection sort\n3.quick sort\n4.insertion sort\n5.merge sort\n99.exit\n");

		__fpurge(stdin);

		fgets(buf,SIZE,stdin);

		ch=intval(buf);

		printf("before swap:");

		disp(&a,size);	
		

		switch(ch){

				case 1:
						b_sort(&a,size);
						break;

				case 2:
						s_sort(&a,size);
						break;

				case 3:
						quick_sort(&a,0,size-1);
								break;
				case 4:
						i_sort(&a,size);
								break;
				case 5:
						m_sortt(&a,0,size-1);
								break;
	
				case 99:
						system("clear");
						exit(1);
				default:
						printf("isn't it a invalid option..!?\n");
						exit(1);	
		}
	

		printf("after swap:");

		disp(&a,size);

		return 0;
}
