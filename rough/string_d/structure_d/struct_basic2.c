#include<stdio.h>
static struct student
{
int a;
    int b;
    int c;
int d;
}s1={6,7,8,9},s2={4,3,2,1},s3;
void main()
{
s3=s1+s2;
printf("%d ",s1.a+s2.a);
}
