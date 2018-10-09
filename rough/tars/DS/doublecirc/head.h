#ifndef HEAD
#define HEAD
#endif
#include	<stdio.h>
#include	<stdio_ext.h>
#include	<stdlib.h>
struct NODE
{
		int data;
		struct NODE* next;
		struct NODE* prev;
};
typedef struct NODE node;
#endif
