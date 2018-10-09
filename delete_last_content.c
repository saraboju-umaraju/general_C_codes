#include	<stdio.h>
 #include <sys/types.h>
       #include <sys/stat.h>
       #include <unistd.h>


int main ( void ) 
{
	FILE *fp = fopen ( "file" , "r+" ) ;;
	
	perror("open");

	struct stat inst ;

	stat ( "./file" , &inst ) ;

	truncate ( "./file" , inst .st_size - 4 ) ;
	
	perror("trunc");

	fclose(fp) ;

}
