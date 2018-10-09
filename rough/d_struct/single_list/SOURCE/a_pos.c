#include"header.h"

extern NODE *tptr;
extern int count;

int add_pos(int num ,int pos, NODE **hptr)
{

	if(pos == count + 1){

			add_end(num,hptr);

			return 0;
	}

	if(pos > count || pos <= 0){

		printf("INSERTION NOT POSSIBLE POSITION OUT OF RANGE\n");
		
		return 0;

	}else{

			add_b4pos(num,pos,hptr);

			return 0;
	}
	
}
