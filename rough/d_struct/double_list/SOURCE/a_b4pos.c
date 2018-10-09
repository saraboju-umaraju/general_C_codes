#include"header.h"

extern int count;

int add_b4pos(int num ,int pos, NODE **hptr)
{
	NODE *temp = *hptr;
	
	if(pos > count){

		printf("%d INSERTION NOT POSSIBLE POSITION OUT OF RANGE\n",count);
		
		return 0;

	}else{

		if(pos == 1){

			if(*hptr == NULL)

			printf("\n*******INSERTION NOT POSSIBLE NO NODES AVAILABLE****\n");
					
			else

			add_begin(num,hptr);

			return 0;
		}else{

			pos = pos - 1;

			while(temp->next != NULL && --pos)

			temp = temp->next;
			
			NODE *new = (NODE *)malloc(sizeof(NODE));

			new->data = num;

			new->next = temp->next;
			
			new->pre = temp;

			temp->next = new;

			count++;

			return 0;
		}
	}
}
