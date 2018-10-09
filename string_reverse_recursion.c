#include	<stdio.h>

#include	<uma.h>

#include	<string.h>

static char *two = NULL ;
static int xx = 1 ;
static char *one = NULL ;

int reverse ( char * str ) 
{

	//if ( one == two ||  one > two  ) return ;
	printf("%d\n ", xx++);
	if ( one >= two  ) return ;

	/* wow great lne */
	
	*two = *one + *two - (*one = *two);

	one++ ; two -- ;

	reverse ( str ) ;
}


int main ( void ) 
{

	char str[100] = ""  ;

	if ( NULL == fgets (str , 99 , stdin) ) {

		puts("inputting failed");

		return 1 ;

	}
	
	str [ strlen ( str ) - 1 ] = '\0' ;

	one = str ;

	two = str + strlen ( str ) - 1 ;

	reverse ( str ) ;

	puts(str) ;

	return 0 ;

}
