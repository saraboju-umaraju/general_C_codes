#include	<uma.h>

void one ( char* str ) {printf("one welcome %s\n",str);};
void three ( char* str ) {printf("two welcome %s\n",str);};
void two ( char* str ) {printf("three welcome %s\n",str);};

int main ( void ) {

		int choice ;
		void (*fp[]) ( char* ) = { one , two , three } ;
		printf ( "you have three options\n" );
		scanf ( "%d", &choice ) ; /* danger but its a snippet */
		if (choice)
		fp[choice] ("umalaz");

		return 0;
}

