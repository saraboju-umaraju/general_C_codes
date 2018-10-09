#include	<stdio.h>
int main(){
unsigned int i,j;
union
{
unsigned int i;
unsigned char a[2];
}u={129};
int n;
n=1;
while(n-->0)
{
j=((u.a[0]&1)<<7);
u.a[0]=u.a[0]>>1;
u.a[0]=u.a[0]|j;
}
printf("%d",u.i);
}
