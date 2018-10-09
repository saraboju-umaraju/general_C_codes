/*
 * display tree in postorder
 */

#include    "header.h"

void postorder(TREE *root)
{

    
    if(root != NULL){

        postorder(root -> left_child);

        postorder(root -> right_child);

        printf("%d\t",root -> data);
    }

}
