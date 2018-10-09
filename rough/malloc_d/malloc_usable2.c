#include    <uma.h>
int main()
{
		char *ptr=malloc(123);
		printf("%zu\n",malloc_usable_size((void*) ptr));
}
