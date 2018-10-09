#include    "../header/head.h"

_node* d_r_disp( _node* head ){
        _node* temp = head;
        if(head == NULL){
                printf(R"NO ELEMENTS IN THE LIST\n"RR);
                return head;
        }
        while(temp->next){
                temp=temp->next;
        }
        while(temp!= head ){
                printf("%d\n",temp->data);
                temp = temp->prev ;
        }
        printf("%d\n",temp->data);
        return head;
}

