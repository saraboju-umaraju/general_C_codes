#include<stdio.h>

int main(void)

{

int a = 2;

if (++a ^ ++a && (a ^ a) || ++a)

printf("%d",a);

return 0;

} 
