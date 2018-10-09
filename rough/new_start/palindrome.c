#include    <uma.h>

int _pal ( char *str ) {


		int var = strlen ( str ) / 2  ;

		if ( var == 0) {

				return 0 ; 
		}

		int var2 = strlen ( str )   ;

		static int l = 1;

		int count = 0 ;

		int _ = 1;

		while ( var ) {

				if ( *( str +  _-1 ) ==  *( str + var2 - _++ ) ) 

						count ++ ;

				var--;
		}

		if ( count  == (strlen ( str ) / 2) ) {

				printf(R"%s\n"Z,str);



		}


}

