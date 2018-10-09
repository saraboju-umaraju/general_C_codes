#include"header.h"
extern int count;

void delete_middle(NODE **hptr)
{


	if(*hptr == NULL){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

	}else{

			if(count ==1 || count ==2){

			printf("\nOPEARTION NOT POSSIBLE THERE SHOULD BE ATLEAST 3 NODES\n");

			}else

			delete_pos((count/2),hptr);

		}
		
}
