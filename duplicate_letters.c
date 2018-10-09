#include	<stdio.h>

#include	<string.h>

int main ( void ) 
{
	char str [ 50 ] ;

	puts("enter a string");

	fgets ( str , 49 , stdin ) ;

	char arr [ strlen ( str ) ]  ;
	
	char arrc [ strlen ( str ) ]  ;

	memset ( arrc , 1 , strlen ( str ) ) ;

	int index = 0 ;

	int in_c = 0 ;

	int i = 0 ;

	while ( *str ) {

		for ( i = 0 ; i < index ; i++ ) {

			if ( arr[i] == *str ) { arrc[i] += 1 ; in_c = 1 ; index++ ;} ;

			}

			if ( ! in_c ) {
			
			arr[index++] = *str ;


			}
			in_c = 0 ;

			str++ ;

	}

	for ( i = 0 ; i < strlen ( str ) ; i++ ) {

		if ( arrc[i] > 1 )
 
		printf("%c %d\n" , arr[i] , arrc[i] );

		}

		puts("remaining are occured once") ;

}
