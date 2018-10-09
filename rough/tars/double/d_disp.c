#include    "../header/head.h"

_node* d_disp(_node * head ){
        _node* temp=head;

        if(head==NULL){
                printf(R"STILL A EMPTY LIST\n"RR);
                return head;
        }
            while( temp ){
                    printf("%d\n",temp->data);
                    temp=temp->next;
            }
            return head;
}
