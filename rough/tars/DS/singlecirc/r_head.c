#include	"head.h"

node* r_head(node* head )
{
		node* temp=head;
		if(head==NULL){
				printf("list is empty\n");
				return head;
		}
	//	printf("%p\n",head);
	//	printf("%p\n",head->ptr);
		if(head==head->ptr){
				head=NULL;
				return head;
		}
		temp=temp->ptr;
		while(temp->ptr!=head){
				temp=temp->ptr;
}
		head=head->ptr;
		temp->ptr=head;
		return head;
		
}
		


