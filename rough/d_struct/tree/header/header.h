#ifndef HEADER_H

#include    <stdio.h>
#include    <stdlib.h>
#include    <stdio_ext.h>

typedef struct node{
    int data;
    struct node *left_child;
    struct node *right_child;
}TREE;

int gv;

int intval_input(void);

TREE *insert(int,TREE *);

void preorder(TREE *);

void inorder(TREE *);

void postorder(TREE *);

TREE *delete_data(int, TREE *);


#endif
