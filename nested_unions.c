#include	<stdio.h>

#pragma pack() 

struct tag {

	int a:9 ;

//	char:0;

	int:15;

	short kk ;

	/*int b:1 ;

	char:0;

	int c:1;

	char:0;

	int d:1 ;

	char:0;

	int e:1;

	char:0 ;*/

	} ; 

int main  ( void )
{
	printf ("sizeof struct %zu\n", sizeof ( struct tag )) ;

	return 0 ;

}
