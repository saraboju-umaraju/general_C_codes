#include <setjmp.h>

jmp_buf kill ;

   //    int setjmp(jmp_buf env);

     //  int sigsetjmp(sigjmp_buf env, int savesigs);
int main ( void ) 

{
	setjmp ( kill ) ;  /* label creation */

	puts("dont care");

	fun() ;
	
	puts("dont care twicwe");

}

int fun ( void ) 
{
	
	puts("in fun");

	longjmp ( kill , 1 ) ; /* eq to goto */

}
