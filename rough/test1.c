#include	"header1.h"
#define SIZE 4
#define STRSIZE 100

int main(void)
{
	char ch[STRSIZE];
	int var[SIZE];
	int i;
	char* arr[]={"source_num","destination_num","source_bit_position","destination_bit_position"};
	for(i=0;i<=SIZE-1;i++){
	printf("input--->%s<---\n",arr[i]);
	fgets(ch,STRSIZE,stdin);
	if((var[i]=intval(ch))!=EOF){}
	else i--;
	}
	i=copy_source_dest(var);
	printf("the number after the operation is:%d\n",i);
	return 0;
}
	int copy_source_dest(int *var)
	{	
	if((var[0]&(1<<var[2]))!=(var[1]&(1<<var[3]))){
	var[1]=var[1]^(1<<var[3]);
	}
	return var[1];
}
