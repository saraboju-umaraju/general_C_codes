#include	<stdio.h>
int main ( char c , char* v[] ) 
{
	sleep(10);
	system(notify-send -u critical "`date`");
	return 0 ;
}
