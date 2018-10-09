#include    "../header/head.h"

_node* d_rem_val(_node* head , int val ){
        _node *temp2,*temp;
        temp2=temp=head;
        if(head == NULL){
                printf("NO ELEMENTS IN LIST\n");
                return head;
        }
        if(head->data == val ){
                head= (_node*) dd_head(head);
                return head;
        }
        
        while(temp->next && temp->data != val){
                temp2=temp;
                temp=temp->next;
        }
        if(temp->next==NULL && temp->data != val){
                printf("NO SUCH ELEMENT FOUND\n");
                return head;
        }
        if(temp->next == NULL && temp->data == val){
              head =(_node*)  dd_end(head);
                return head;
        }
        temp2->next=temp->next;
        temp->next->prev=temp2;
        free(temp);
        temp=NULL;
        return head;
}


                        
