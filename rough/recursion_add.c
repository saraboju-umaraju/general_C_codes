#include <stdio.h>
int sum(int n, int);
int main(){
    int num,add,pow=0;
    printf("Enter a positive integer:\n");
    scanf("%d%d",&num,&pow);
    add=sum(num,pow);
    printf("sum=%d",add);
}
int sum(int n,int x){
	//static int x=4;
    if(x==0)
       return 1;
    else
       return n*sum(n,--x);    /*self call  to function sum() */
}
