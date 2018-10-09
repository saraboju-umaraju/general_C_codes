#include <stdio.h>
#define SIZEOF(object) (char *)(&object+1) - (char *)(&object)
#define DECLARE_TYPE(type) __typeof__(type) newvar
int main()
{
        double x;
        int arr[10];
        printf("double var size: %d\n", SIZEOF(x));
        printf("double type size: %d\n", sizeof(double));
        printf("int arr[10] size : %d\n", SIZEOF(arr));

        DECLARE_TYPE(double);
        printf("double type size: %d\n", SIZEOF(newvar));

        return 0;
}
