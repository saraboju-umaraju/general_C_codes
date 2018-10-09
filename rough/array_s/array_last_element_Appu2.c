
#include <stdio.h>

int main()
{
        int i=0;
        int a[10] = {1,2,3,4,5,6,7,8,9,0xdeadbeef};
        //printf ("%d\n",*((&a+1) - (int*)a));
       // printf("%p\n", a);
        printf("%d\n",*((int *)(&a+1) - 1));
       for(i=0;i< 1256; i++){

                if(((*((int *)(&a+1) - 1))==i)){
                        printf("hai%d\n",i);
                }
        }
        return 0;
}

