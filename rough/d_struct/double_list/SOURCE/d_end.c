#include"header.h"

extern NODE *tptr;
extern int count;

void delete_end(NODE **hptr)
{

	NODE *temp = *hptr;


	if(*hptr == NULL){

			printf("NO NODES TO DETETE\n");
	}
	
	else if((*hptr)->next == NULL){
	
			free(*hptr);

			*hptr = NULL;

			tptr = NULL;

			count--;
	}
	else{
	
				while(temp->next->next)

				temp = temp->next;

				temp->next = tptr->next;

				free(tptr);

				tptr = temp;

				temp = NULL;

				count--;
		}
}
