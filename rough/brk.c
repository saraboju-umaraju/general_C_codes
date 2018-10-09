#include    <uma.h>
#include    <sys/resource.h>
int main (void) {
		int *p = malloc ( 12 );
		printf("%p\n",p);
		int *q = sbrk(0);
		printf("%d\n",getrlimit());
}
