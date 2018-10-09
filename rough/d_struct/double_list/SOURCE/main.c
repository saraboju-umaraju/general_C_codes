#include"header.h"

NODE *tptr = NULL;// declare a structure pointer for holding the last deleteress
int count = 0;

int main(void)
{
		NODE *hptr = NULL;// declare a structure pointer for holding the first deleteress

		int op;

		while(1){

		printf("ENTER YOUR CHOICE\n1.INSERTION\n2.DELETION\n3.EXIT\n");
		
		op = intval();

		switch(op)
		{
			case 1:
					hptr = insertion(hptr);
					break;

			case 2:
					hptr = deletion(hptr);
					break;

			case 3:
					return 0;

			default:
					printf("YOU HAVE ENTERED WRONG CHOICE");

		}

		}

		return 0;
}
