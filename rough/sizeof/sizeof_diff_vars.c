#include <stdio.h>
int dabba ;
int main ( void )
{
	volatile const auto a;
	const b;
	signed c;
	long  d;
	static volatile const e;
	static f;

	volatile register *r;

//	extern int gun;

	printf ("%d %d\n",sizeof(a),a);
	printf ("%d %d\n",sizeof(b),b);
	printf ("%d %d\n",sizeof(c),c);
	printf ("%d %ld\n",sizeof(d),d);
	printf ("%d %d\n",sizeof(e),e);
	printf ("%d %d\n",sizeof(f),f);
	printf ("%d %d\n",sizeof(dabba),dabba);
//	printf ("%d %d\n",sizeof(g),g);
		

return 0;

}
int gun=2;
