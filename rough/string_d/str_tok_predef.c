#include <stdio.h>
int main(void)
{
		char s[100] = "*my*nam*eis*u(+*ma*jsfh";
		char delm[] = "*+";
		char *str = _strtok(s, delm);
		while(str){
				printf("%s\n", str);
				str = _strtok(NULL, delm);
		}
		return 0;
}
