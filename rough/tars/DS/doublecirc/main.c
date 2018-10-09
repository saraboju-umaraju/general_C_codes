#include	"head.h"
#include	<_val.h>
node* i_beg(node*,int);
//node* disp(node*);
//node* i_end(node*,int);
//node* r_head(node*);
//node* r_end(node* );
int main()
{
		int num;
		int pos;
		int ch;
		int ch2;
		char buf[99];
		node *head=NULL;

		while(1){
				printf("enter your choice\n1.insert at beginning\n2.insert at end\n3.remove at beginning\n4.remove at end\n5.display\n");
				scanf("%d",&ch);
				switch(ch){
						case 1:
								printf("enter a element\n");
								__fpurge(stdin);
								fgets(buf,99,stdin);
								num = intval(buf);
								head = i_beg(head,num);
								break;
				/*		case 2:
								printf("enter a element \n");
								scanf("%d",&num);
								head= i_end(head,num);
								break;
						case 3:
								head = r_head(head);
								break;
						case 4:
								head= r_end(head);
								break;*/
						case 5:
								disp(head);
								break;
				}
		}
}
