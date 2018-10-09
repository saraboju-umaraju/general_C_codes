#include"header.h"

extern int count;

void delete_penaltiment(NODE **hptr)
{


	if(*hptr == NULL){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

			}else{

			if(count == 1)

			printf("\nOPEARTION NOT POSSIBLE NO SUCH DATA AVAILABLE\n");

			else

			delete_pos(count -1,hptr);

		}
}
