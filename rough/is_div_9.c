#include<stdio.h>

int isDivBy9(int n)
{
    if (n == 0 || n == 9)
        return true;
    if (n < 9)
        return false;

    return isDivBy9((int)(n>>3) - (int)(n&7));
}

int main()
{
    for (int i = 0; i < 100; i++)
       if (isDivBy9(i))
         cout << i << " ";
    return 0;
