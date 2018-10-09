#include	<uma.h>
#include	<uma.h> 
#include	<_val.h>

int main(void)
{

		int i=0;

		int c=0;

		int key;

		int ch;

		char buf[_SIZE];

		printf("the number of elements you need\n");
		_clr

		_FGETS
	
		c=VAL
		if(c==EOF){
				printf("INVALID INPUT\n");
				return 1;
		}


		int a[c];

		printf("enter elements in to array\n");
		for( ; i < c ; i++){

				printf("enter your %d th element\n",i+1);

				_clr       //clearing buffer

				_FGETS		//getting string

				a[i]=VAL;   //validation

		}

		printf("which element you wanna search in list\n");

		_clr

		_FGETS

		key=VAL
		
				printf("choose methods\n1.linear search\n2.binary search\n99.exit");
						scanf("%d",&ch);
				
						switch(ch){
					
							case 1: l_search(&a,c,key);
									break;
							case 2:
									//b_sort(&a,c);
									b_search(&a,0,c-1,key);
										break;
							default:
									exit(1);
						}
			return 0;
}
