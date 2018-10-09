#include"header.h"

extern NODE *tptr;
extern int count;
void add_end(int num, NODE **hptr)
{

	NODE *new = (NODE *)malloc(sizeof(NODE));

	new->data = num;

	if(*hptr == NULL){

	new->next = *hptr;

	new->pre = NULL;

	*hptr = new;

	tptr = new;

	count++;
	
	}else{
	
			new->next = tptr->next;

			new->pre = tptr;

			tptr->next =  new;

			tptr = new;

			count++;
	}
}
