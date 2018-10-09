#include    <stdlib.h>
int main()
{
        //char uma[5][10]={"umaraju","sneha","gangagan","lakshmi","heroine"};
        int arr[]={1,2,3,4,5};
       // int *ptr=arr;
       // int **ptr2=&ptr;
      

        printf("%d\n",((int )(&arr+1))-2);
}
