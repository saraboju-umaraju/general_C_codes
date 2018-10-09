#include	"head.h"

node* i_beg(node* head, int add)
{
		node* temp=head;
		node* nod=(node*)malloc(sizeof(node));
		if(head==NULL){
				nod->next=nod;
				nod->prev=nod;
				nod->data=add;
				head=nod;
				return head;

		}
		temp=temp->next;
		while(temp!=head){
				temp=temp->next;
		}
		/*temp->prev=nod;
		temp->next=nod;
		nod->next=temp;
		nod->prev=temp;
		nod->data=add;
		head=nod;*/
		nod->next=head;
		nod->next->prev=nod;
		head=nod;
		nod->prev=temp;
		temp->next=head;
		nod->data=add;
		return head;


}



