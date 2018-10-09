#include<stdio.h>
#include<math.h>
typedef struct{
        char *name;
        double salary;
}job;
void main(){
        int i=0;
        static job a={"TCS",15000.0};
        static job b={"IBM",25000.0};
        static job c={"Google",35000.0};
        int x=5;
        job * arr[3]={&a,&b,&c};
        printf("%s  %f\t",(i=2 , i= 0 , i = 1 , i)[*arr]);  
}
/*double myfun(double d){
        d-=1;
        return d;
}*/
