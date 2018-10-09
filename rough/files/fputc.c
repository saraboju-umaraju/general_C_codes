#include    <stdio.h>
int main (int c,char **argv) {
		FILE *fp=fopen (argv[1],"r");
		int ch;
		while((ch = fgetc(fp))!=EOF){
				//printf("%c",ch);
				fputc(ch,stdout);
		}
}
