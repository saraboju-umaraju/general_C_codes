/*
 * add data in a tree
 */

#include    "header.h"

TREE *insert(int data, TREE *root)
{
    TREE *new = NULL;

    if((new = malloc(sizeof(TREE))) == NULL){                   // creatiing new node and allocating memory
            printf("Error in memory allocation\n");
            return root;
    }
            
    new -> data = data;
    new -> left_child = NULL;
    new -> right_child = NULL;

    if(root == NULL){
                                                    //if tree is empty then add data to root    
        root = new;
        root -> left_child = NULL;
        root -> right_child = NULL;

        return root;
    }

    if((data) < (root -> data)){                                //if data if less than root then add data on left side

        root -> left_child = insert(data, root -> left_child);
    }

    else if((data) > (root -> data)){                           //if data is greater than root then add data on right side

        root -> right_child = insert(data, root -> right_child);
    }
    else if(data == root -> data){
        return root;
    }


    return root;
}



