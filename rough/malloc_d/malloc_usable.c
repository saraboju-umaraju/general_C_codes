
main()
{
		char *p=malloc(10);
		printf("%d\n",*(p-4));
		printf("%u",malloc_usable_size(p));
		*p=malloc(10);
		printf("%d\n",*(p-4));
		printf("%u",malloc_usable_size(p));
}
