# include	"head.h"
char* rd_str(int a)
{
	char *p1;
	p1=(char*)malloc(a*sizeof(char));
	if(p1==NULL){
	printf("malloc failed\n");
	exit(0);
	}
	printf("input your string\n");
	__fpurge(stdin);
	fgets(p1,a,stdin);
	if(p1[(strlen(p1)-1)]=='\n'){

        p1[(strlen(p1)-1)]='\0';

    }
	return p1;
}
