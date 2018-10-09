#include	<stdio.h>
#include	<stdlib.h>
#include	<stdio_ext.h>
#include	<string.h>
#define SIZE 30
typedef struct double_link{
		
		struct double_link *pre;
		
		int data;

		struct double_link *next;
}NODE;

int intval(void);

char charvalid(void);

void add_begin(int , NODE **);

void add_end(int , NODE **);

NODE * insertion(NODE *);

NODE * deletion(NODE *);

void display(NODE *);

int add_afterval(int , int ,NODE **);

int add_beforeval(int , int ,NODE **);

int add_afterpos(int , int ,NODE **);

int add_b4pos(int , int ,NODE **);

int add_pos(int , int ,NODE **);

int add_penaltiment(int ,NODE **);

int add_middle(int ,NODE **);

void delete_begin(NODE **);

void delete_end(NODE **);

void delete_afterval(int ,NODE **);

void delete_beforeval(int ,NODE **);

void delete_afterepos(int ,NODE **);

void delete_b4pos(int ,NODE **);

void delete_pos(int ,NODE **);

void delete_penaltiment(NODE **);

void delete_middle(NODE **);

