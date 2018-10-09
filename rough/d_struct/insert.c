#include	<uma.h>
#include    <_val.h>

node* insert(node *head, int add )

{
	node *nod ;
	nod = (node*) malloc(sizeof(node));
	if ( head == NULL ) {
			head = nod;
			nod -> data = add ;
			nod -> ptr = NULL ;
			return head;
	}
	nod -> ptr = head;
	head = nod ;
	nod -> data = add;
	return head;
}
