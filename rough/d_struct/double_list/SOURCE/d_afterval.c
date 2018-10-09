#include"header.h"

extern int count;

void delete_afterval(int val,NODE **hptr)
{

	int pos = 0;
	
	NODE *temp = *hptr;

	if(*hptr == NULL){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

	}else{

			while(temp){
					
					pos++;

					if(temp->data == val)
							
					break;

					temp = temp->next;
			}

			if(pos == count && temp == NULL){

			printf("\nOPEARTION NOT POSSIBLE NO SUCH DATA AVAILABLE\n");

			}else

			delete_pos(pos+1,hptr);

		}
		
}
