#include	<uma.h>
int main()
{
		char *p,*q,*r,*s,*t;
		int i;
		p=(char*)malloc(1);
		q=(char*)malloc(1);
		r=(char*)malloc(1);
		s=(char*)malloc(1);
		t=(char*)malloc(1);
				printf("%p \n",p);
				printf("%p \n",q);
				printf("%p \n",r);
				printf("%p \n",s);
				printf("%p \n\n\n",t);
/*		for(i=0;i<19;i++){
				if(i!=12)
				*(p+i)=i;
		}*/
		*t = 20;		
		for(i=-4;i<85;i++){
				printf("%p %d %d \n",(p+i),i,*(p+i));
		}
	//	printf("%d",*q);
//		free(p);
}
