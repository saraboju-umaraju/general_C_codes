#include	"head.h"

bst* insert(bst* root, int add)
{
		bst *nod=(bst*)malloc(sizeof(bst));
		if(root == NULL){
				nod->data=add;
				nod->left=NULL;
				nod->right=NULL;
				root=nod;
				return root;
		}
		if(add < root->data){
				root->left = (bst*)  insert(root->left,add);
		}
		if(add > root->data){
				root->right = (bst*) insert(root->right, add);
		}
		if(add == root->data ){

				printf("THE ELEMENT IS ALREADY IN THERE\n");

		}
				return root;
}

				
		
