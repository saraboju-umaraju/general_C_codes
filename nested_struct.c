#include	<stdio.h>

#include	<_val.h>

typedef struct nest {
	
		char name[10] ;

		short age ;

		struct DOB {
	
				char day ;

				char month ;

				short year ;

		}_DOB;

}nest ;

int main ( void ) 
{
	nest inst ;

	printf(); 

	strcpy ( inst . name , "umaraju" ) ;

	inst . age = _val ( "age" ) ;
	
	inst . _DOB . day = _val ( "day" ) ;

	inst  . _DOB . month = _val ( "month" );

	inst . _DOB . year = _val ( "year" ) ;

	printf ("name is %s\n",inst . name ) ;

	printf("age is %d\n", inst . age) ;
	
	printf("date month year is %d %d %d \n",  inst . _DOB . day , inst  . _DOB . month , inst . _DOB . year) ;

	return 0 ;

}
