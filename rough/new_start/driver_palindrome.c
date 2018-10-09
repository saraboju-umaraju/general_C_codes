#include    <uma.h>

#include    <string.h>

int main (void) {

	int i =0;

	int j=0;

	int k=0;

	char str[123] ;

	printf(B"ENTER STRING\n"Z);

	scanf("%[^\n]s",str);


	for ( j = 1 ;  j < strlen(str) ; j++ ) {

		for ( i = 0 ; i < strlen(str ) ; i++ )

			print ( str+i , j );

	} 


}

int print ( char* str , int n) {


	char arr[123];

	int var =0;

	do {

		*(arr+var) =  *(str+var);

		var++;

	}while( var <= n );

	*(arr+var) = 0 ;

	if ( strlen ( arr ) == n + 1 )

		return _pal(arr);
}

