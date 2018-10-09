# include <stdio.h>
main()
{
	int  usable = 5;
	int usable1 = 30;

	printf("%d\n",sum(usable,usable1));//export LD_LIBRARY_PATH=./ and gcc main.c -L. libnam.so
	printf("%d\n",sub(usable,usable1));//compile with gcc main.c ./libnam.so with path

	return 0;
}
