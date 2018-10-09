#include"header.h"

extern NODE *tptr;
extern int count;

void delete_begin(NODE **hptr)
{

	NODE *temp = *hptr;
	
	if(*hptr == NULL) {

		printf("NO NODES TO DETETE\n");
	}
	
	else if((*hptr) -> next == NULL) {
	
		free(temp);

		*hptr = NULL;
			
		tptr = NULL;
			
		count--;
	}
	else {
		*hptr = temp -> next;

		(*hptr) -> pre = NULL;

		free(temp);

		temp = NULL;

		count--;
	}
}
