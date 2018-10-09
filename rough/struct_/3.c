int main ()
{
struct foo3 {
    char c;      /* 1 byte */
    char *p;     /* 8 bytes */
};
	struct foo3 foo;

	printf("%zu\n" , sizeof foo );

	return  0;
}
