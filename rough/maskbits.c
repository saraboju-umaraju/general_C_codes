#include    <uma.h>
int main (void) {
	int	num=10;
//	num = num & (~0) << 2    ;// mask bits 
	num = num | ((unsigned)(~0) >> (32-3)) ; //set bits
//	num = num ^ ((unsigned )(~0) >>  (32-4 ));
		printf("%d\n",num);
}
