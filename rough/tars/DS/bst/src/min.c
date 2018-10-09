#include	"head.h"

bst *min ( bst* root ) {
		
		if ( root == NULL ) {
				printf ("LIST IS EMPTY\n");
				return root;
		}
		while ( root->left ) {
				 root=root->left;
				  }
		return root;
}
