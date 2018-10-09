#include	<stdio.h>
#include	<stdio_ext.h>
#include	<stdlib.h>
//#include    <limits.h>
# define INT_MIN   (-INT_MAX - 1)
# define INT_MAX   2147483647
#define ZZ __fpurge(stdin);
#define R "\x1b[42m"
#define RR "\x1b[0m"
//void disp(int[] , int );
//void s_sort(int[] , int);
typedef struct NODE 
{
        int data;

        struct NODE *ptr;
}node;

typedef struct NODED
{
                int data;
                      struct  NODED *next,*prev;
}_node;

