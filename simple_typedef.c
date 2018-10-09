#include	<uma.h>

typedef int (*ptr)(int , char ) ;

int kill ( int , char ) ;

int main( void ) {
		
		ptr ptr ; 

		ptr = kill ;

		printf ( "data that received is %d\n",ptr ( 16 , 65 ));

		return 0;

}

int kill ( int a , char b ) {

		return a+b ;

}

