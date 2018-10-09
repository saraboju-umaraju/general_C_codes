#include"header.h"

extern int count;

int add_afterpos(int num ,int pos, NODE **hptr)
{
	NODE *temp = *hptr;

	if(pos > count || pos < 1){
		
		printf("INSERTION NOT POSSIBLE POSITION OUT OF RANGE\n");
		
		return 0;
	}
	else{

		if(pos == 1 && *hptr == NULL){

		printf("\n*******INSERTION NOT POSSIBLE NO NODES AVAILABLE****\n");
		
		return 0;

		}else if(pos == count){

		add_end(num,hptr);

		return 0;

		}else{

			while(temp->next != NULL && --pos)

			temp = temp->next;
			
			NODE *new = (NODE *)malloc(sizeof(NODE));

			new->data = num;

			new->next = temp->next;

			temp->next = new;

			count++;

			return 0;

		}
	}
}	
