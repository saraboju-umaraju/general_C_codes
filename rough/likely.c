#include	<stdio.h>

#define likely(x)       __builtin_expect((x),1)

#define unlikely(x)     __builtin_expect((x),0)

int main ( void ) 
{

	if ( unlikely(1) ) {

		printf("%d\n",linux);

	}
}
