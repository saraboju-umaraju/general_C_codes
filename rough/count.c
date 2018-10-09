#include	<stdio.h>

int main(void)
{
	char c;
 		int count=0;
			int ch=0;
		while(c=getchar()!=EOF)
{
			if(c==' '||c=='\t'||c=='\n')
				count=count+1;
		       else{ 
				ch+=1;
				count=0;
}
}
	printf("%d\n",ch);
	return 0;

}
