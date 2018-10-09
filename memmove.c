#include	<stdio.h>

int main ( void ) 
{
	char buf[120] = "abcdefg";
	
	char buf2[120] = "hello";

	void *memmove(void *dest, const void *src, size_t n);

	memmove( buf+5 , buf+2 , 3 ) ;

	puts( buf ) ;

}
