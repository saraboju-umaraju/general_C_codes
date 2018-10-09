#include    "head.h"
int i(node**,int);
void d(node*);
int main (void) {

		node *head=NULL;
		int ch;
		while(1) {
				printf("enter\n");
		ch=getchar();
		int b=1;
		switch(ch) {
				case 'a': 
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
						i(&head,rand()%101);
//						i(&head,999);
						break;
				case 'b':
						d(head);
						break;
				case 'c':
						loop(head);
						break;
				case 'd':
						sort(&head );
						break;


		}
		}
}


