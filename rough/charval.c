#include	<stdio.h>
#include	<string.h>

void valid();
void invalid();
int main(void)
{
	char ch[123];
	int i=0;
	printf("enter a valid string\n");
	fgets(ch,122,stdin);
		if((ch[0]=='\n')&&(strlen(ch)==2)){
		printf("\\n is valid but enter something before \\n\n");
			return 0;
			}
			else if(ch[0]==' '||(strlen(ch)==2)){
			printf("space is valid but enter something bud\n");
		return 0;
			}
			else if(ch[0]=='\t'||(strlen(ch)==2)){
	printf("\\t is valid but only with combination\n");
			return 0;}

	for(i=0;i<strlen(ch)-1;i++){
	
			if((ch[i]<39&&ch[i]>=1)){
				if(ch[i]==' '){
				;}
				else{
			invalid();
			return 0;		
			}
	}
	
	}
	valid();
}
	void invalid()
	{
	printf("didnt i ask a valid string\n");
	}
	void valid()
	{
	printf("you are a wonderful guy\n");

	}
