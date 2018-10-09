#include	<stdio.h>
#include	<malloc.h>
struct dabba {
		
		int some;
		
		char *name;
};

int main() {

		struct dabba *u;		
		
		char *killed = malloc ( 1234 );

		perror("status malloc");

		u = (struct dabba*) malloc ( sizeof ( struct dabba ) ) ;

		(*u).some = 12 ;

		u->name = malloc( 12 );

		strcpy (u->name , "dabba" ) ;

		u = malloc ( 123 );


}

