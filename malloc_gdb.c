#include	<stdlib.h> /* it will definitely help you out of crisis */

int main ( void ) 
{
	/* run this program execute it without any SIGSEGV or any SIGABRT*/

	/* out put should show "welcome to the world of ---> debugging <----" */

	/*do not change my code */

	char *ptr = NULL ;

	strcpy ( ptr , "welcome to the world of ---> debugging <----") ;

	puts(ptr) ;

	free ( ptr ) ;

}
