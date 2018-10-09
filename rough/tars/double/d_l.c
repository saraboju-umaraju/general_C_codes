#include    "../header/head.h"
#include	<_val.h>
#define FGETS num = fgets(buf,SIZE,stdin);
#define SIZE 20
_node *head=NULL;
_node* i_head(_node* , int);
_node* d_disp(_node* );
_node* d_r__disp(_node* );
_node* id_end(_node*,int);
_node* dd_end(_node*);
_node* dd_head(_node*);
int main()
{
        int num;
        int pos;
        int ch;
        int ch2;
		char buf[SIZE];

        while(1){

                printf("\n-------------------------\nENTER YOUR CHOICE\n1.insert\n2.display\n3.remove\n");
                scanf("%d",&ch);
                switch(ch){
                        case 1:
                                while(1){
                                        printf("CHOOSE\n1.insert at beginning\n2.insert at end\n3.insert by position\n4.insert before a value\n");

                                        scanf("%d",&ch2);
                                        switch(ch2){

                                                case 1: printf("ENTER A NUMBER TO INSERT\n");
														FGETS
                                                        head = i_head(head,num);
                                                        break;
                                                case 2:
                                                        printf("ENTER A NUMBER TO INSERT\n");
                                                        ZZ
																FGETS
                                                        head = id_end(head,num);
                                                        break;
                                                case 3:
                                                        printf("enter a position\n");
                                                        fgets(buf,SIZE,stdin);
                                                        printf("enter a element you wanna insert\n");
														FGETS
                                                        head=(_node*) d_i_pos(head,pos,num);
                                                        break;
                                                case 4:
                                                        printf("enter a element to insert\n");
														FGETS
                                                        printf("enter a existing value so that i can insert new element before it\n");
                                                        pos = fgets(buf,SIZE,stdin);
                                                        head =(_node*) d_in_val(head, pos, num);
                                                        break;
                                        }break;
                                }break;
                        case 2:
                                while(1){

                                        printf("1.FORWARD WAY\n2.THE OTHER WAY\n");
                                        scanf("%d",&ch2);
                                        switch(ch2){
                                                case 1:

                                                        printf(R"THE ELEMENTS ARE :\n"RR);
                                                        d_disp(head);
                                                        break;
                                                case 2:
                                                        printf(R"ELEMENTS IN REVERSE ORDER:\n"RR);
                                                        d_r_disp( head );
                                                        break;

                                                default: printf("NO VALID INPUT IS GIVEN\n");
                                                         break;

                                        }break;

                                }break;


                        case 3:
                                while(1){
                                        printf("SELECT OPTIONS\n1.remove from begininng\n2.remove from ending\n3.remove by value\n4.remove by position\n");
                                        scanf("%d",&ch2);
                                        switch(ch2){
                                                case 1: 
                                                        head = (_node*)dd_head(head);
                                                        break;
                                                case 2: 
                                                        head =(_node*) dd_end(head);
                                                        break;
                                                case 3: 
                                                        printf("enter a value to remove\n");
														FGETS
                                                        head = (_node*)d_rem_val(head, num );
                                                        break;
                                                case 4: 
                                                        printf("enter the position to remove\n");
                                                        pos = fgets(buf,SIZE,stdin);  
                                                        head = (_node*) d_rem_pos(head, pos );
                                                        break;


                                        }
                                        break;
                                }
                                break;



                        default: 
                                printf("INVALID INPUT\n");
                }

        }
}
