#include	<uma.h>

//int add ( register int , register int ) ;

int add (  int uma,   int raj ) ;

int main ( register int a , register char * v[] ) {

	printf("%p\n",a);
	
	printf("%c\n",(v[0][0]));

	add(1,2);

}

int add ( int a , int b ) {

	printf("%p",&a);

}
