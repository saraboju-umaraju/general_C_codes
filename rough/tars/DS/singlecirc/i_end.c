#include	"head.h"

node* i_end(node* head , int add)

{
		node *nod=malloc(sizeof(node));
		node* temp=head;
		if(head==NULL){
				head =( node*)i_beg(head,add);
				return head;
		}
		while(temp->ptr != head ){
				temp=temp->ptr;
		}
		nod->ptr=temp->ptr;
		temp->ptr=nod;
		nod->data=add;
		return head;
}

