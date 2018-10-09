#include	<stdio.h>

int main ( void ) 
{
	FILE *fp = fopen ( "/dev/random" , "r" );

	while ( fgetc(fp) ) 
		printf ("%c",fgetc(fp));

}
