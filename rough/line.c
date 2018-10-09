#include	<stdio.h>
#define MAXLINE 1000
int mgetline(char line[],	int maxline);
char* mcopy (char to[],	 char from[]);

int main (void)
{
		int len,max;
		char *u;
		char line[MAXLINE], longest[MAXLINE];
		max=0;
		while	((len = mgetline(line,MAXLINE))>0)
				if(len>max){
						max=len;
						u=mcopy(longest,line);
				}
		//if(max>0)
				printf("\n%s\n",u);
		return 0;
}
int mgetline(char s[],int lim)
{
		int c,i;
		for(i=0;i<lim-1 && (c=getchar()) !=EOF && c!='\n' ;++i)
				s[i]=c;
		if(c=='\n'){
				s[i]=c;
				++i;
		}
		s[i]='\0';
		return i;
}

char*  mcopy(char to[], char from[])
{
		int i=0;
		while((to[i]=from[i])!='\0'){
				++i;}
return to;
}
