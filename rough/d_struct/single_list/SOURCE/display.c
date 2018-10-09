#include"header.h"

void display(NODE *prnt)
{

		system("clear");

		if(prnt == NULL)

				printf("*********NO LIST IS AVAILABLE********\n");

		else{

				printf("\t\tDATA AVAILABLE\n");

				while(prnt){

						printf(" %d -",prnt->data);

						prnt =(NODE *) prnt->next;
				}

				printf("NULL\n\n");
			}
}
