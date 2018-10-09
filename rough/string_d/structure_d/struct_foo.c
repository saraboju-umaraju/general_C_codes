#include	<stdio.h>
struct st{int a;int b;};
void foo(struct st*);
int main(){
struct st ab={128,768};
struct st *pq=&ab;
foo(pq);
}
void foo(struct st *p)
{
char *pt;
p->a=768;
p->b=128;
pt=(char*)p;
printf("%d",*++pt);
}
