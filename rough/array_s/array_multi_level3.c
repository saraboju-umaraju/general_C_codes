#include<stdio.h>
void main(){
        int arr[][3]={{1,2,0},{3,4,5},{5,0,0}};
        printf("%d %d %d",sizeof(arr),arr[0][2],arr[1][2]);
}
