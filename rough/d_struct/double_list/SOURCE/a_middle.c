#include"header.h"

extern NODE *tptr;
extern int count;

int add_middle(int num ,NODE **hptr)
{

	int pos = count/2;

	if(*hptr == NULL || count == 1){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

			return 0;
	}else{

		add_afterpos(num,pos,hptr);

		return 0;
		
		}
}
