#include	"head.h"

bst* pre_order(bst *root) {
		if(root==NULL) {
				return root;
		}
		printf("%d\n",root->data);
		pre_order(root->left);
		pre_order(root->right);
}
