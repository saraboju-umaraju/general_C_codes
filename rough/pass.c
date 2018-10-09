//struct spwd *getspnam(const char *name);

#include	<shadow.h>

#include	<stdio.h>

int main ( void ) 
{
	struct spwd *ins = NULL  ;

	ins = getspnam("umaraju");

	printf("%s\n" , ins -> sp_namp) ;
	
	printf("%s\n" , ins -> sp_pwdp) ;

	return 0 ;

}
