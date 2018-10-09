#include	"head.h"

int sum_all(bst* root) {

	int sum=0 ;
	
	if ( root ==  NULL ) {

		return sum;

	}

	sum = sum + root -> data;

	sum = sum + sum_all(root -> left) + sum_all(root -> right);

	return sum;

}
