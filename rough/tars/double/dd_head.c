#include    "../header/head.h"

_node* dd_head(_node *head){
        
        _node* temp = head;

        if( head == NULL ){
                printf(R"I WOULD'VE DELETED BUT NO ELEMENTS\n"RR);
                return head;
        }
        if(temp->next == NULL){
                return NULL;
        }
        head=temp->next;
        head->prev=NULL;
        free(temp);
        temp=NULL;
        printf("head is %p\n",head);
        return head;
}
        
