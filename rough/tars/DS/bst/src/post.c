
#include	"head.h"

bst* post_order(bst *root) {
		if(root==NULL) {
				return root;
		}
//		printf("%d\n",root->data);
		post_order(root->left);
		post_order(root->right);
		printf("%d\n",root->data);
}
