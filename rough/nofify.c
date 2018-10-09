#include	<stdio.h>
int main ( int c , char **v ) {
	if ( c!=2) {puts("usage alert <message>");exit(1); }
	system ( "notify-send  %s", v[1]);
}
