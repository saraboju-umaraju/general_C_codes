#include    "../header/head.h"
_node* id_end( _node *head,int add ){
        _node* temp=head;
        _node* temp2;
        _node* nod=(_node*)malloc(sizeof(_node));
        if(head == NULL){
               // printf(R"LIST IS EMPTY YET\n"RR);
               head =(_node*) i_head(head,add);
                return head;
        }
        while(temp->next){
               // temp2=temp;
                temp=temp->next;
        }
        temp->next = nod;
        nod->prev=temp;
        nod->next=NULL;
        nod->data=add;
       // printf("prev prev is %p\nprev is %p\nnext is %p\n",nod->prev->prev,nod->prev,nod->next);
        return head;
}


