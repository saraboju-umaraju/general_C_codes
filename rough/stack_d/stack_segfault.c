#include<uma.h>
int main()
{
int a=3;
printf("%d",sum(a));
}
int sum(int a)
{
if(a){
return a+sum(--a);
}
else 
return 0;
}
