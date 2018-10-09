#include	"head.h"

bst* max( bst* root ) 
{
		if(root==NULL) {
				printf("ROOT IS EMPTY\n");
				return root;
		}
		while( root->right ) {
				root=root->right;
		}
		return root;
}
