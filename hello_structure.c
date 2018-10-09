#include	<stdio.h>

#include	<stdlib.h>

#include	<_val.h>

void create ( void ) ;

void show ( void ) ;

void rem ( void ) ;

void update ( void ) ;

typedef struct student_record {
	
				char *name ;

				short age ;

				float garbage ;

} stud ;

int main ( void ) 
{
	int choice = 0 ;
	
	void (*ptr[]) ( ) = { create , show , rem , update } ; 

	while ( ONE ) {
	
	puts ( " 1.new entry \n 2.show details \n 3.remove details \n 4.update details * .exit") ;
	
	choice = _val ( " choice" ) ;

	if ( choice > 4 ) exit ( EXIT_SUCCESS ) ;

	ptr[ choice -1 ]( );

	}

	return 0 ;

}

void create ( void ) 
{
	
	puts("create fun") ;

	stud s1 ;

	stud s1

}

void show ( void ) 
{

	puts("show fun") ;
}

void rem ( void ) 
{

	puts("rem fun") ;
}
void update ( void ) 
{

	puts("update fun") ;
}

