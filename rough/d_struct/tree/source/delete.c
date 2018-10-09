/*
 * delete data from tree
 */

#include    "header.h"

TREE *delete_data(int data, TREE *root)
{

    TREE *temp1 = NULL;     //pointer for traversing
    TREE *temp2 = NULL;     //pointer to hold min data from tree


    if(root == NULL){
        printf("NO data in a list\n");
        return root;
    }

     if((data) < (root -> data)){                                        // if data is less than root then traversss to left and delete

        root -> left_child = delete_data(data, root -> left_child);
    }

    else if((data) > (root ->data)){                                     // if data is greater than root then traversss to right and delete

        root -> right_child = delete_data(data, root -> right_child);
    }

    else{
        /* if node has only one child or no child*/

        if(root -> left_child == NULL){                             //if left child of tree is null

            temp1 = root -> right_child;

            free(root);

            return temp1;
        }

        else if(root -> right_child == NULL){                   //if right chalid of tree is null

            temp1 = root -> left_child;

            free(root);

            return temp1;
        }

        /* if node have two child*/

        temp2 = root -> right_child;

        /*find min data from right side*/

        while(temp2 -> left_child != NULL){

            temp2 = temp2 -> left_child;
        }

        root -> data = temp2 -> data;

        root -> right_child = delete_data(temp2 -> data, root ->right_child);

        return root;
    }
    

        return root;
}







