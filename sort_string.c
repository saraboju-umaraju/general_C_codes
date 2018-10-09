#include	<stdio.h>

#include	<string.h>

int swap ( char* , char* );

int main  ( void ) 
{

	char *v[] = { "abcd" , "bcded" , "cdeedfg" , "defedfv" , "efgedscdfg" } ;

	typeof(v) new_arr ;

	int index = 0 ;

	int new_in = 0 ;

	int lone = 0 ;

	int ltwo = 0 ;

	int max_len = 0 ;

	//max_len = strlen ( v[0] ) ;

	for ( lone = 0 ; lone < 5 ; lone++ ) {

			index = lone ;
		
		for ( ltwo = lone + 1 ; ltwo < 5 ; ltwo++ ) {

			if ( strcmp ( v[index] , v[ltwo] ) > 0 ) {
	
					index = ltwo ;

				}

			swap( v[lone] , v[index] ) ;

			}
		
	}

		return 0 ;
}

int swap ( char* str , char* str2 ) 
{
	char temp[30] ;

	strcpy( temp , str ) ;

	strcpy ( str , str2 ) ;
	
	strcpy ( str2 , temp ) ;

}
