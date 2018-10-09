#include	<stdio.h>
#include	<math.h>
void valid();
int main(void)
{
/*	char ch[123];
	int i=0;
	fgets(ch,122,stdin);
	for(;i<strlen(ch)-1;i++){*/
		double k;
	printf("enter a float\n");
	scanf("%lf", &k);
	if(floor(k)<k)

	{
	valid();
		}
}
	void valid(){
	printf("valid float\n");
	}
