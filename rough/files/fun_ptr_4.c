#include <stdio.h>
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
 
int main()
{
    void (*fun_ptr)(int) = fun;
	printf("%p\n",fun_ptr); 
    (*fun_ptr)(10);
 
    return 0;
}
