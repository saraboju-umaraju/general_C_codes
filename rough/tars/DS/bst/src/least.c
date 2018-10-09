#include	"head.h"

int least_2 ( bst* root ) {
		bst* temp=root,*temp2=NULL;
		if( root   == NULL ) {
				printf("CANT PERFORM\n") ;
				return 1;
		}
		if( root -> left ==NULL && root-> right ==NULL ){
				printf("ONLY SINGLE ELEMENT PRESENT CANT DO OPERATION\n");
				return 1;
		}

		
		if( root-> left == NULL){
				if(root->right->right==NULL){
						printf("the last but least element is %d\n",root->right->data);
						return 1;
				}
				while( temp->right ){
						temp2=temp;
						temp=temp->right;
				}
				printf("the least but second element is %d\n",temp2->data);
				return 1;
		}
		while( temp->left ){
				temp2=temp;
				temp=temp->left;
		}
		printf("least but second element is %d \n",temp2->data);
		return 1;
}
