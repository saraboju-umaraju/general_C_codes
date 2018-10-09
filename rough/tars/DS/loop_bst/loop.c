#include    "head.h"

int loop(node *head) {

		node *sp=head;
		node *fp=head;
		int flag=1;
		if(head -> ptr == NULL ) {
				printf("no loop 1\n");
				return;
		}

		
		while( fp != sp || flag ) {
				if( !fp || !fp->ptr ) {
						printf("NO LOOP\n");
						return ;
				}
				sp=sp->ptr;
				fp=fp->ptr->ptr;
				flag=0;
		
		}
		printf("LOOP SERVICES ARE AVAILABLE\n");


				







		}


				




