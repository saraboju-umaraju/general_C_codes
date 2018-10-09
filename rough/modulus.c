#include	<uma.h>
int main(){
const unsigned int n = 21;
const unsigned int s = 4 ;
const unsigned int d = 1U << s ;
unsigned int m;
m = n & ( d - 1 );
printf("%d\n",m);
}
