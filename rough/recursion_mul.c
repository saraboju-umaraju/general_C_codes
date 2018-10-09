#include<stdio.h>
int mul(int a, int b);
int
main()
{
    int a = 10;
    int b = 5;
    printf("%d", mul(a, b));
}

int
mul(int a, int b)
{

    if (!b) {
        return 0;
    } else {
//sum++;
        return a + mul(a, --b);
    }
}
