#include	<stdio.h>

int main ( void ) 
{

#define hello \033[48 5 92 38 5 214

	int x = 0 ;

	//while (  ) {

	printf ("\033[48;5;92;38;5;214mumaraju\e[m\n\n") ;

	usleep(100000);
	
	//}

	return 0 ;

}
