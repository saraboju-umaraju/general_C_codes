#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<getopt.h>

int main ( int c , char* v[] ) 
{
	
	char raj_op = 0 ;

	char ch ;

	struct option longopts[] = { {"uma" , required_argument , 0 , 'u' } , {"raj" , required_argument , &raj_op , 'r' } , {0 ,0 ,0 ,0 } } ;
					
	while ( ( ch = getopt_long( c , v , "" , &longopts , &longindex ) ) != -1 ) {

			printf("getopt returned %c\n" , ch);

	}

	return 0 ;
}
