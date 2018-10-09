#include <stdio.h>

int main()
{
        int n, reverse = 0;

        char a[5];

        int i=3;

        printf("Enter a number to reverse\n");
        scanf("%d", &n);
        a[5]='\0';
        while (n != 0)
        {
                
                reverse =  n%10;
                a[i]=(reverse + '0');
                n = n/10;
                i--;
        }

        printf(" %s\n", a);

        return 0;
}
