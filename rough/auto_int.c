#include	<uma.h>

static int dd = 123 ;

int main() {

	int a ;	

	static int dd = 99 ;
	a++;
	a = a++ + dd;
	
	auto int b ;

	int c = a ;
	
	auto int d = dd ;
	printf ("%d ",a);
	

}
