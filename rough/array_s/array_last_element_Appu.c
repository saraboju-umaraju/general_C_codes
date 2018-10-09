#include    <stdio.h>
int main()
{
        int a[9]={1,2,3,4,5,6,7,8,9,10};
        //int *ptr=(&a+1);
//        printf("%d\n",sizeof(a));
        printf("%p\n",&a[-1]);
        printf("%p",&a[0]);
}
