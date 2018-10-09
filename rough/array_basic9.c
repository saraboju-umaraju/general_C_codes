#include <stdio.h>
#define ABC sizeof((array)/sizeof(array[0]))
int array[]={1,2,3,4,5,6,7};
int main()
{
//char* p="ABC";
//printf("%d",printf("umaraju"));

//printf("how are\0you");
//printf("%s",p);
//#include<stdio.h>
//int ONE=1,TWO=2;
//#define ONE TWO
//#define TWO ONE
//printf("%d%d:",ONE,TWO);
int d;
for(d=-1;d<=(ABC-2);d++)
printf("%d",array[d+1]);
}
