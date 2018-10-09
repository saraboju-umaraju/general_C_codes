#include <stdio.h>

#include	<stdarg.h>

int avg(char *,...);

int main()
{

		avg(1);

}
int avg(char *p,...)

{
		va_list ap;

		int  i = 0;

		char c;
		va_start(ap,p);
		//for(i=0; i<p; i++){
		///va_arg(,char*);while(P){
		while(p){
				if(*p) {
						va_arg(ap,char*);
						i++;
						p++;
				}
		}

		//printf("%d\n",i);

		va_end(ap);
}
