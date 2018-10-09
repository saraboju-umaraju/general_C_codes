
#include <stdio.h>

int main()
{
        int i=0;

        int a[10] = {1,2,3,4,5,6,7,8,9,10};

        printf ("%d\n",*((int*)(&a+1) - 1));

        return 0;
}

