:include	<stdio.h>

int main(void)
{
float celc=0,c=0;
double far;
	/*	while(c<100){
			far=(1.8*c)+32;;			c+=1;*/
printf("farn to celc table\n");
/*for(c=0;c<100;c++){
far=(1.80*c)+32;
printf("%d	%lf\n",c,far);
}*/
for(far=300.0;far>=0;far--){
celc=(far-32.0)/1.8;
printf("%f	%lf\n",celc,far);
}/*or(c=0;c<100;c++){
far=(1.80*c)+32;
printf("%d	%lf\n",c,far);
}*/
return 0;
}
