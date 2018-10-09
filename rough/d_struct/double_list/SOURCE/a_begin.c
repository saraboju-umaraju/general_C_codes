#include"header.h"

extern NODE *tptr;
extern int count;

void add_begin(int num, NODE **hptr)
{

	NODE *new = (NODE *)malloc(sizeof(NODE));

	new->data = num;

	if(*hptr == NULL)

	tptr = new;

	new->next = *hptr;

	new->pre = NULL;

	*hptr = new;

	count++;

}
