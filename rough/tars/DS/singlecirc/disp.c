#include	"head.h"

node* disp(node* head)
		{
				node* temp=head;
				if(head==NULL){
						printf("EMPTY LIST\n");
						return head;
				}
				printf("elements are\n");
				printf("%d\n",temp->data);
				temp=temp->ptr;
				while(temp != head ){
						printf("%d\n",temp->data);
						temp=temp->ptr;
						
				}
		}

