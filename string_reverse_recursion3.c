#include	<stdio.h>

#include	<uma.h>

#include	<string.h>
int i = 0 ;

int reverse ( char * str ) 
{

	printf("%d\n" ,++i) ;

	while ( * str == *( strlen(str) + str  - 1) &&  str < str + len) {str++ ; len-=2 ;}
	
	if ( str >= str + len  ) return ;

	*str = *str + *(str + len) - (*(str + len) = *str);
	
	reverse ( ++str , len-2 ) ;
}


int main ( void ) 
{

	char str[100] = ""  ;

	if ( NULL == fgets (str , 99 , stdin) ) {

		puts("inputting failed");

		return 1 ;

	}
	
	str [ strlen ( str ) - 1 ] = '\0' ;

	reverse ( str , strlen ( str ) - 1 ) ;

	puts(str) ;

	return 0 ;

}
