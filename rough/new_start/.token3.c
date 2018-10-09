#include    <uma.h>

#include	<string.h>

char *_tok ( char* , char* );

int main (void) {

		char str[100]  ;

		char str2[100]  ;
	
		puts("enter string");
		
		fgets ( str , 99 , stdin ) ;
	
		str [ strlen ( str ) - 1 ] = '\0' ;
		
		puts("enter delimiters");
		
		fgets ( str2 , 99 , stdin ) ;
		
		str2 [ strlen ( str2 ) - 1 ] = '\0' ;

		char *token = _tok( str , str2 ) ;

		while ( token ) {

				printf("TOKEN IS %s \n",token );

				token = _tok ( NULL , str2 ) ;

		}

		return 0 ;

}



char* _tok ( char *str , char* str2 ) {

		static char *ptr ;

		int var = 0;

		int var2 = 0;

		int some = 0 ;

		if ( str == NULL ) {

				str = ptr;

				if ( ptr == NULL )

						return NULL;

		}

		while( * (str + var) ) {    //first while

				var2 = 0;

				while ( * ( str2 + var2 ) ) {   //second while

						if ( *( str + var ) == * ( str2 + var2 ) )	{

								* ( str + var  ) = '\0';

								var2 = 0 ;

								while ( *( str2 + var2 ) && *( str + var + 1 ) && * ( str + var  ) == * ( str2 + var2 )) 

										if ( * ( str + var + 1 ) && * ( str + var + 1 ) == * ( str2 + var2++ ) ) { var++ ;var2 =0 ;continue ;} ;

								if ( !* ( str + var + 1  ) ) return str ;

								ptr = ( str + var + 1  );

								return str;
						}

						var2 ++;

				}

				var ++ ;

		} // first while ends

		ptr = NULL ;

		return str;

}
