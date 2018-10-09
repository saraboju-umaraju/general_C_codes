/*
 * display tree in inorder form
 */

#include    "header.h"
void inorder(TREE *root)
{

    if(root != NULL){

        inorder(root -> left_child);

        printf("%d\t",root -> data);

        inorder(root -> right_child);
    }

}
