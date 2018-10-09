# include <stdio.h>

int a = 20;

void fun(void);

main()
{
		int a = 30;
		fun();
		printf ("-------%d\n",a);
}
void fun(void)
{
		int r=10, cnt = 0;
		int *p = &r;
		while(*p != 30) {
				p++;
		}
		/*p--;
		  while(*p != 30) {
		  p--;
		  }*/



		if(*p == 30){
				printf("%p\n", &p);
				*p = 10;
		}
		else
				printf("dfsdf\n");

} 
