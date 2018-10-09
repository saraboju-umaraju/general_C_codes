#include"header.h"

extern NODE *tptr;
extern int count;
void add_end(int num, NODE **hptr)
{

	NODE *new = (NODE *)malloc(sizeof(NODE));

	new->data = num;

	if(*hptr == NULL){

	new->next = *hptr;

	*hptr = new;

	tptr = new;

	count++;
	
	}else{
	
			new->next = tptr->next;

			tptr->next =  new;

			tptr = new;

			count++;
	}
}
