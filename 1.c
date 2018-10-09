#include <stdio.h>
#if 1

int add (int, int);

int a;
static int b;
int c = 10;
const int d = 20;
static int e = 25;
static const int g;
main ()
{
	int x;
	int y = 50;
	static int w;
	static int z = 22;

	x = add (c, d);

	printf ("%d %d %d %d %d %d %d %d %d \n", a, b, c, d, e, x, y, w, z );
}


int add (int a1, int a2)
{
	char a[12] = "hello";
	char b[3] = {'a', 'b', 'c'};

	printf ("%s\n", strcpy (a, b));
	printf ("%s\n", b);

	printf ("a : %p\nb : %p\n", a, b);

	return a1+a2;
}

#endif
