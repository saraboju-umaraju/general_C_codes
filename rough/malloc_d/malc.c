#include    <uma.h>
int main (void) {
		int *p = malloc(0);
		printf("%d\n",malloc_usable_size(malloc(0)));

		printf("%d\n",*(p-1));
		perror("");
}
