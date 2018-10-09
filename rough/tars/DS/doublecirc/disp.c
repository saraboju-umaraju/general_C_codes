#include	"head.h"

node* disp(node* head)
{
		node* temp=head;
		if(head==NULL){
				printf("NO LIST FOUND\n");
				return head;
		}
		printf("elements are \n%d\n",temp->data);
		temp=temp->next;
//		printf("%d\n",temp->data);
		while(temp!=head ){
				printf("%d\n",temp->data);
				temp=temp->next;
		}
}

			
