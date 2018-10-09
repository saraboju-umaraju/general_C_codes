#include    "../header/head.h"

_node *i_head(_node * head,int add){
        
        _node *nod=(_node*)malloc(sizeof(_node));
        _node* temp=head;
        if(head == NULL){
                nod->data=add;
                nod->prev=NULL;
                nod->next=NULL;
                head=nod;
                return head;
        }
        nod->data=add;
        nod->prev=NULL;
        nod->next=head;
        head=nod;
        temp->prev=nod;
        return head;
}


