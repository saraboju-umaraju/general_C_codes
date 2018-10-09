#include	<uma.h>

int main ( void ) 
{
	unsigned char x = 0xf2 ;

	unsigned short y = 0xa0c0 ;

	//x = x ^ x ^ ( x >> 4 ) ^ ( x << 4 ) ;

	//x =  (x >> 4 ) ^ ( x << 4 ) ;

	//y = ( y >> 8 ) ^ ( y << 8 ) ;

	y = ( ( ( y << 12)  ) | ( ( y >> 4  ) )) ^ ( (( y << 4 ) | ( ( y >> 12 ) ) ) )  ;

	printf("%x",y);

	return 0 ;

}
