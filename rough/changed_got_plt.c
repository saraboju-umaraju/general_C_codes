/*propreitary of umaraZ Inc written for GLOBALEDGESOFT p LTD */

#include	<uma.h>

int data = 12;

int main ( void ) {

	int *p = &data ;

	printf("dabba %p exit %p  %p \n",p-6 ,puts , *(p-6));	

	*(p-6) = puts;
	
	printf("i will be printed umasraZ %d" ,data);	

//	exit(199);

}
