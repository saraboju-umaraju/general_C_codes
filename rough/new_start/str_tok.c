#include	<string.h>
#include	<stdio.h>

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

	char *token = strtok( str , str2 ) ;

	while ( token ) {

		printf("token is %s \n",token );

		token = strtok ( NULL , str2 ) ;

	}

	return 0 ;

}

char* _tok ( char *str , char* str2 ) {

	static char *ptr ;

	int var = 0 ;

	int var2 = 0 ;

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

				while ( *( str2 + var2 ) && * ( str + var + 1 ) && 1 ) {	

					if ( *( str2 + var2 ) == *( str + var + 1 ) ) {

						var ++ ; var2 = 0 ;

					}
					else {
						if ( ! * (str2 + var2 ) ) {

							ptr = ( str + var + 1  );

							if ( ! *str && ptr == NULL  ) return NULL ; 

							return str;
						}
						var2++ ;
					}
				}

				ptr = ( str + var + 1  );

				if ( ! *str ) { str = ptr ; var2 = 0 ; var = 0 ; continue ;} 

				return str;
			}
			var2 ++;
		}

		var ++ ;

	} // first while ends

	ptr = NULL ;

	return str;

}
