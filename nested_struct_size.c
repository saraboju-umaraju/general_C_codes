#include	<stdio.h>

#include	<_val.h>

typedef struct nest {
	
		char name[10] ;

		short age ;

		struct {
	
				char day ;

				char month ;

				short year ;

		}gb;

}nest ;

/* If tag name is there and no instance -- then no size will be added or inner structure wont be considered

 * if tag name is not there and no instance or instance doest not matter they will be part of the parent sturct

 */
int main ( void ) 
{

	printf ("structure size %zu\n" ,sizeof ( nest ) ) ;

	return 0 ;

}
