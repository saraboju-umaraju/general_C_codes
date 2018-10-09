#include	"head.h"

node* i_beg(node* head, int add)
{
		node* temp=head;
		node* nod=(node*)malloc(sizeof(node));
		if(head == NULL){
				head=nod;
				nod->data=add;
				nod->ptr=head;
				return head;
		}
		while(temp->ptr !=  head){
				temp = temp->ptr;
		}
		nod->ptr=head;
		head=nod;
		nod->data=add;
		temp->ptr = head;

		return head;




}
				
