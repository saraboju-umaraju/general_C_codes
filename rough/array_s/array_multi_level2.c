#include<stdio.h>
void main(){
        long  a[2][4]={0l,1l,2l,3l,4l,5l,6l,7l};
        printf("%ld\t",a[1][2]);
        printf("      %ld    %ld\t",*(a[1]+3),3[a[1]]);
        printf("%ld    %ld     %ld\t" ,*(*(a+1)+2),*(1[a]+2),3[1[a]]);

}
