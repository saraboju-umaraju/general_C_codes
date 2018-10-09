#include"header.h"

extern NODE *tptr;
extern int count;

void delete_pos(int pos,NODE **hptr)
{
	NODE *temp = *hptr;
	
	NODE *temp1 = *hptr;

	if(pos > count || *hptr == NULL || pos < 1){

			printf("OPERATION NOT POSSIBLE\n");

	}else if(pos == 1)
	{

			*hptr = temp->next;

			if(*hptr == NULL)
			
			tptr = NULL;
			
			else

			(*hptr)->pre = NULL;

			free(temp);

			temp = NULL;
			
			count--;
	}
	else{
	
				while(temp->next && --pos){

				temp1 = temp;

				temp = temp->next;
				
				}

				temp1->next = temp->next;

				if(temp->next == NULL)
				
				tptr = temp;
				
				else
					
				temp->next->pre = temp1;

				free(temp);

				temp = NULL;

				count--;
		}
}
