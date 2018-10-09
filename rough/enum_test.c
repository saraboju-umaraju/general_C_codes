#include<stdio.h>
enum power{
        Dalai,
        Vladimir=3,
        Barack,
        Hillary
};
void main(){
        float leader[Dalai+Hillary]={1.f,2.f,3.f,4.f,5.f};
        enum power p=Barack;
        printf("%d\n",p);
        printf("%f",leader[p>>1+1]);  
}
