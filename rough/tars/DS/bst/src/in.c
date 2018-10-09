
#include	"head.h"

bst* in_order(bst *root) {
		if(root==NULL) {
				return root;
		}
		in_order(root->left);
		printf("%d\n",root->data);
		in_order(root->right);
}
