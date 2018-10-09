#include	<stdio.h>

#include	<unistd.h>

int main ( void ) 
{


	fopen("some_file" ,"w");

	perror("");
	
	int pip[2] ;

	pipe(pip) ;

	getchar();

	return 0 ;

} 
