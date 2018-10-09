#include	<uma.h>

#define STR "killerktillermz"

int main ( void )
{
		char temp[] = STR ;

		char *str = temp + 1;

		char x = 0 ;	

		while ( *str ) {

				if ( *str == * ( temp + x )  && *str != ' ') {

						*str = ' ' ;

						* ( temp + x ) = ' ' ;

						x+=2 ;

						str = temp + x + 1 ;

				}

				str++ ;

		}

		printf("%c\n",* ( temp + x ));

}

