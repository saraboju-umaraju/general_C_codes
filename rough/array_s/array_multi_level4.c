#include<stdio.h>
void main(){
        static int a=2,b=4,c=8;
        static int *arr1[2]={&a,&b};
        static int *arr2[2]={&b,&c};
        int* (*arr[2])[2]={&arr1,&arr2};
        printf("%d \t %d\n",*(*arr[0])[1],  *(*(**(arr+1)+1)));
}
