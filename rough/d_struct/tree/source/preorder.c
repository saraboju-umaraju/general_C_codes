/*
 * display list in preorder
 */

#include    "header.h"
void preorder(TREE *root)
{

    if(root != NULL){

        printf("%d\t",root -> data);
        
        preorder(root -> left_child);

        preorder(root -> right_child);

    }

//    printf("\n");

}
