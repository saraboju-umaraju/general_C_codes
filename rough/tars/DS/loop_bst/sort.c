#include    "head.h"

int sort(node **head ) {

		node* temp= *head;
		node* temp3= temp;
		node* temp2= temp->ptr ;


		while( temp=temp3 ) {
				

				while( temp2 = temp->ptr ) {
				if(temp->data > temp2->data) 
						temp->ptr = temp2->ptr;
						temp2->ptr = temp;
						temp2=temp2->ptr;
						temp=temp->ptr;
		}
				temp3=temp3->ptr;
		}
}

