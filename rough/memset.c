#include<stdlib.h>
int main()
{
	char *c=(char*)malloc(5);
	int i=1;
	for(i=0;i<5;i++){
	printf("%d\n",c[i]);
}
memset(c,'a',4);
	for(i=0;i<5;i++){
	printf("%d\n",c[i]);
}
}
