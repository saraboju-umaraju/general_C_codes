#include	<uma.h>

node* disp( node *head ) 
{
		if(head == NULL ) {
		printf("OPERATION FAILED\n");
		return NULL;
		}
		while( head -> ptr  ) {
				printf("%d\n",head -> data);
				head =(node*) head -> ptr ;
		}
		return NULL;
}
