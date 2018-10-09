#include	"head.h"

node* r_end(node* head )
{
		node* temp=head;
		if(head == NULL){
				printf("LIST IS EMPTY\n");
				return head;
		}
		if(temp->ptr==head){
				head=NULL;
				free(temp);
				return head;
		}
	//	temp=temp->ptr;
		while(temp->ptr->ptr!= head){
				temp=temp->ptr;
		}
		//printf("%d\n",temp->data);
		temp->ptr=temp->ptr->ptr;
		return head;
		
}



