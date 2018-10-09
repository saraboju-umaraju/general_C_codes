#include	"head.h"

int main()
{
int c;
printf("what do you wanna do now\n1.islower\n2.isupper\n3.isdigit\n4.isxdigit\n5.isalnum\n6.isalpha\n7.isprint\n8.izprint\n");
scanf("%d",&c);

	switch(c)
	{
		case 1:
				is_lower();
