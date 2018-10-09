#include"header.h"

extern NODE *tptr;
extern int count;

int add_afterval(int num ,int val, NODE **hptr)
{

	int pos = 0;
	
	NODE *temp = *hptr;

	if(*hptr == NULL){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

			return 0;
	}else{

			while(temp){
					
					pos++;

					if(temp->data == val)
							
					break;

					temp = temp->next;
			}

			if(temp == NULL)

			pos++;

			if(pos == count+1){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

			return 0;

			}

			add_afterpos(num,pos,hptr);

		return 0;
		
		}
		
}
