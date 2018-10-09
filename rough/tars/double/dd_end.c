#include    "../header/head.h"

_node* dd_end(_node* head ){
        
        _node* temp=head;
        _node* temp2=head;
        if(head == NULL){
                printf(R"RUNNING OUTTA ELEMENTS\n"RR);
                return NULL;
        }
        while(temp->next){
                temp2=temp;
                temp=temp->next;
        }
        if(head->next == NULL){
                return NULL;
        }
        temp2->next=NULL;
        free(temp);
        temp=NULL;
        return head;
}
