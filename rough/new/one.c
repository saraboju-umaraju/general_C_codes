#include	<stdio.h>

int main ( void )
{
	FILE *fp = NULL ;

	fp = fopen ("uma_temp","w");

	perror("");

	while(1) {

	fprintf(fp, "%s" , "umaraju is a good boy\n");

	sleep(1) ;

	fflush(fp) ;

	rewind(fp);

}

	return 0 ;
}
