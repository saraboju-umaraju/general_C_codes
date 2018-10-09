#include"header.h"

extern NODE *tptr;
extern int count;

int add_penaltiment(int num ,NODE **hptr)
{

	if(*hptr == NULL || count == 1){

			printf("\nOPEARTION NOT POSSIBLE NO LINKS AVAILABLE\n");

			return 0;
	}else{

		add_afterpos(num,count - 1,hptr);

		return 0;
		
		}
}
