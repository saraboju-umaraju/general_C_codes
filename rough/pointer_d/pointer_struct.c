#include	<uma.h>

int main()
{
		struct st
		{
				char a;
		}a;

		int p[]= {126,35567,3};

		int q[] = {126,12575678,8};

		*(struct st*)q = *(struct st*)p;

		printf("%d %d %d\n",q[0],q[1],q[2]);
		
		printf("\n");
}
