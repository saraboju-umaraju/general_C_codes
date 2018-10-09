#include	<stdio.h>

int main ( void ) 
{
	FILE *fp = fopen ( "file" , "r" ) ;

	perror("opening a file");

	FILE *fp1 = fopen ( "file2" , "r" ) ;

	char tobe[120] = "" ;
	
	char by[120] = "" ;
	
	puts ( "enter string to be replaced" );
	
	fgets ( tobe , 119 , stdin ) ;

	tobe [ strlen ( tobe ) - 1] = '\0' ;
	
	puts ( "enter replacement string" );

	fgets ( by , 119 , stdin ) ;

	fgetc ( fp ) ;

	fseek ( fp , -1 , SEEK_CUR ) ;
	
	by [ strlen ( by ) - 1] = '\0' ;

	
