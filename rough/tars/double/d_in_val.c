#include    "../header/head.h"

_node* d_in_val(_node* head, int val,int add){
        _node* nod=(_node*)malloc(sizeof(_node));
        _node *temp,*temp2;
        temp=temp2=head;
        if(head==NULL){
                printf("NO LIST\n");
                return head;
        }
       
        while(temp && temp->data!= val ){
                temp2=temp;
                temp=temp->next;
        }
        nod->next=temp->next;
        nod->prev=temp;
        temp->next->prev=nod;
        temp->next=nod;
        nod->data=add;
        return head;
}


