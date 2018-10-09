#include    "head.h"

void d(node *head ) {
	//	if(head->ptr  )
	//			d(head->ptr);

		while(head ) {
				printf("%d\n",head->data);
				head=(head)->ptr;
		}
}
