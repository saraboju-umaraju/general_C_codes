#include<stdio.h>
#include<math.h>
double myfun(double);
void main(){
        double(*array[3])(double);
        array[0]=exp;
        array[1]=sqrt;
        array[2]=myfun;   printf("%.1f\t",(*array)((*array[2])((**(array+1))(4))));

}
double myfun(double d){
        d-=1;
        return d;
}
