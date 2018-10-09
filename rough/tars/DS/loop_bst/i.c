#include    "head.h"

int i(node **head, int add ) {
	
		node *nod=malloc(sizeof(node));
		node *hea=*head;


		if(add==999) {
				 while((hea)->ptr ) {
						 hea = (hea)->ptr ;
				 }
				 (hea) -> ptr = *head;
				 return ;

		}


		nod->data=add;

				nod->ptr=*head;
				
				*head = nod;
}


