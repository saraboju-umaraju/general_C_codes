#include <_val.h>
#include	<uma.h>

#define MAX 5

int top = NULL;
struct NODE
  {
  int data;
  struct NODE* ptr;
  };
  typedef struct NODE node;
node *head=NULL;
int size = 0;
void display(node* head);
node* push(node *head ,int add);
node*  pop(node *head);
#define FF __fpurge(stdin);
#define SIZE 10
int main(void)
{
		int choice;
		int x=0; 
		int num;
		char buf[SIZE];
		while (1)
		{

				printf("----------------------------------\n1.push  \n");
				printf("2.pop\n");
				printf("3.display \n");
				printf("4.quit \n");
				printf("enter your choice : ");
				FF
						fgets(buf,SIZE,stdin);
				choice = intval(buf);

				switch (choice)
				{

						case 1:
								printf("eneter element to push\n");
								__fpurge(stdin);
								fgets(buf,SIZE,stdin);
								num=intval(buf);
								head =  push(head,num);
								break;
						case 2:
								head = pop(head );
								break;
						case 3:
								display( head );
								break;
						case 4:
								exit(1);
						default:
								printf("is it a valid choice....? \n");
				}
		}
}

node* push(node *head ,int add)

{

		node* nod;
		if(!(nod=malloc(sizeof(node))))
				printf("malloc failed");

		if (size == MAX ){
				printf("STACK OVERFLOW\n");
				return head;
		}
		else
		{
				if(head==NULL){
						head=nod;
						nod->data=add;
						nod->ptr=NULL;
						size++;
						return head;

				}
				else{
						nod->ptr=head;
						nod->data=add;
						head=nod;
						size++;
						return head;
				}


		}

}

node*  pop(node *head)

{
		node *temp=head;
		int x=0;
		if ( head == 0)
		{
				printf("STACK UNDERFLOW\n");

				return 0;
		}
		else
		{
				head = temp->ptr;
				free(temp);
				size--;
				return head;


		}

} 

void display(node* head)
{
		int i;
		if (head == NULL )
				printf("STACK IS EMPTY\n");
		else
		{
				printf("STACK IS\n :------------------------ \n");
				while(head){

						printf("%d \n", head->data);

						head=head->ptr;
				}

		}
}
