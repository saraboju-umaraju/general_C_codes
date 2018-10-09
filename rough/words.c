#include	<stdio.h>
main()
{
		int cnt=0,temp=0;
		char c;
		printf("enter str\n");
		while((c=getchar())!=EOF) {
				if(c=='\t'||c=='\n'||c==' ') { 
						if(temp==1) {
								cnt++;
								temp++;
						}
				}
						else 
								temp=1;
		}	
		printf("\nwc=%d\n",cnt);
}			

/*int main(void)
  {
  char c[100];

  int ch=0,i=0;
  printf("enter an array\n");
  while(k=getchar()!=EOF)
  {
//if(c==' '||c=='\t'||c=='\n')
//	count=count+1;
// else{ 
//ch+=1;
//count=0;
//}
c[i]=k;
if(i>0);
else	{
if(c[i]==c[i-1])
{
;}
else {
count+=1;
}
}
i+=1;}
ch=count+1;
printf("%d\n",ch);
return 0;

}*/
/*#include<string.h>
  main()
  {
  char s[100];int cnt=0,i;
  puts("enter a string\n");
  gets(s);
  for(i=0;s[i];i++)
  { if(s[i]==' '||s[i+1]==' ')
  ;
  else{
  if(s[i]==' ')
  cnt++;
  }
  }
  printf("%d\n",cnt);
  }*/
