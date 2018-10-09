#include    "../header/head.h"

_node* d_rem_pos(_node *head, int pos) {
        _node *temp,*temp2;
        temp=temp2=head;
        if(head==NULL){
                printf("CANT FIND ELEMENTS\n");
                return head;
        }
        if(head->next == NULL && pos==1){
                head = (_node*) dd_head(head);
                return head;
        }
        if(pos==1){
                head = (_node*) dd_head(head);
                return head;
        }

        
        while(--pos && temp->next ){
                temp2=temp;
                temp=temp->next;
        }
        if(head->next == NULL && pos>1 ){
                printf("CANT DO THAT\n");
                return head;
        }
        if(temp->next==NULL && pos==0){
                printf("in hese");
               head=(_node*) dd_end(head);
               return head;
        }
         temp2->next=temp->next;
         temp2->next->prev=temp2;
         free(temp);
         temp=NULL;
         return head;
}



