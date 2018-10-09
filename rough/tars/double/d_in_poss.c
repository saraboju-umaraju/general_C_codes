#include    "../header/head.h"

_node* d_i_pos(_node* head, int pos,int add){
        _node* nod=(_node*)malloc(sizeof(_node));
        _node *temp2=NULL;
        _node *temp=head;
        if(head==NULL && pos!=1){
                printf(R"POSITION ISNT AVAILABLE\n"RR);
                return head;
        }
        if(head==NULL && pos==1){
                head=(_node*)i_head(head, add);
                return head;
        }
        if(pos==1){
               head= (_node*) i_head(head,add);
                return head;
        }
        pos--;
       printf("head is %p\n",head);
        while(temp && --pos )
        {
               // printf("temp2 is %p\temp is %p\n",temp2,temp);
                temp2=temp;
                temp=temp->next;
        }
        if(temp->next==NULL && pos==0){
                head=(_node*)id_end(head,add);
                return head;
        }
        nod->next=temp->next;
        temp->next->prev=nod;
        nod->prev=temp;
        nod->data=add;
        temp->next=nod;
        nod->data=add;
        return head;
}


