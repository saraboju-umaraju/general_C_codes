#include	<stdio.h>
#include    <string.h>
#define ASCII_value_for_zero 48
void uma_atoi(char *s);

int main(void)
{
 char str[100];
	printf("dont sit still enter something\n");
	scanf("%s/n",	str);
		uma_atoi(str);
		return 0;
		}
 void uma_atoi(char *s)
{
     	int len;
		int i=0;
		int num=0;
		int tot=0;
	len=strlen(s);
	for(i=0;i<len;i++){
	 	num=(s[i]-ASCII_value_for_zero);
		tot+=num;
			if(!(i==len-1))
		tot=(tot*10);}
			printf("resulted integer is %d\n",  tot);
			}
