#include	<stdio.h>

int main ( void ) 
{
	FILE *f = fopen ( "one" , "r") ;

	perror("open status");
	
	FILE *fp = fopen ( "two" , "r") ;

	perror("open status");

	
	FILE *fpp = fopen ( "three" , "w") ;

	perror("open status");

	int count = 1 ;

	char buf[20] = "" ;

	while ( !feof ( f ) && !feof ( fp ) ) {

	bzero ( buf , 20 ) ;
	if ( count++ % 2 ) 

		fgets ( buf , 20 , f ) ;

	else 

		fgets ( buf , 20 , fp ) ;

	fputs ( buf , fpp ) ;	

	}

	bzero ( buf , 20 ) ;
	
	rewind(fpp);
	
	perror("rewind");	

	while (  !fgets ( buf , 20 , fpp ) ) {
		bzero(buf, 20);
		puts(buf);
	}
	fcloseall();
}

	

	
