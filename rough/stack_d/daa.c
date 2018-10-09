#include 	<stdio.h>
int main(void)
{
//	int a = 0x5743;
	
	char *p="abc";

//	a  = ( ( ((a&0x0F00)>>8) | ((a&0x000F) << 8)) | (a&0xF0F0));

//	printf ("%08x\n", a&(0x0) | 0x5347);
	
	printf("%c",*p++);
//	printf("%c",++*p);
	printf("%c",(*p)++);

	return 0;

}
