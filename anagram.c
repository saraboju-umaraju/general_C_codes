#include	<stdio.h>
#include	<string.h>

int main ( void ) 
{
	char str3[100] = {} ;
	
	char str4[100] = {} ;

	char *str = str3 ;
	
	char *str2 = str4 ;

	char *temp = str2 ;

	strcpy(str, "aaaa");
	strcpy(str2, "aaab");
	//in_string ( str , 99) ;
	
	//in_string ( str2 , 99 ) ;

	if ( strlen ( str ) != strlen ( str2 ) ) { puts("not anagrams ") ;return 1 ;} ;

	while ( *str ) {

		while ( *str2 ) {

			if ( *str == *str2 ) {

				*str2 = ' ' ;

				*str++ = '\0' ;

				str2 = temp ;

				}

				else str2++ ;

		}

		str++ ;

	}
	
	while ( *temp == ' ' ) { *temp = '\0' ; temp ++ ; }

	if ( ! strlen(temp) ) puts("anagrams") ; else puts ("no anagrams") ;

	

	return 0 ;
}

	
