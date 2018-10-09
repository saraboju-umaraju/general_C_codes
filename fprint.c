#include	<stdio.h>

int main ( void ) 
{
	int temp = 0 ;
	int i = 123456;

		FILE *fp = fopen ( "fprint" , "w" ) ;

		fprintf ( fp , "%d" ,i) ;

		return 0 ;

}
