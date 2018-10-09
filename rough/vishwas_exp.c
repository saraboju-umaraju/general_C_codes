#include<mpv.h>
#if 0
//atoi implemantation
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int atoi_implement( char *s);
int main()
{
		char *s;
		s=(char *)malloc(100);
		scanf("%s",s);
		printf("%d\n",atoi_implement(s));
		return 0;
}
int atoi_implement(char *s)
{
		int i=0,num=0;
		while(s[i])
		{
				if(!(isdigit(s[i])))
						break;
				num=num*10+(s[i]-'0');
				i++;
		}
		return num;
}

#endif

#if 0
//auto and static storage calss specifiers variable
#include<stdio.h>
void func (void)
{
		int fn_auto_var = 0;			// function auto variable
		static int fn_static = 0;		// function static variable

		fn_auto_var = fn_auto_var + 1;
		fn_static = fn_static + 1;

		printf ("Value of fn_auto_var = %d \n", fn_auto_var);
		printf ("Value of fn_static_var = %d \n", fn_static);
		(void)
		{
				int fn_auto_var = 0;            // function auto variable
				static int fn_static = 0;       // function static variable

				fn_auto_var = fn_auto_var + 1;
				fn_static = fn_static + 1;

				printf ("Value of fn_auto_var = %d \n", fn_auto_var);
				printf ("Value of fn_static_var = %d \n", fn_static);

				printf ("\n");

				return;
		}
		nclude<stdio.h>
				int main()
				{
						float a,b,c;
						a=1.1;
						b=21.1;
						c=b>=a?2.2:1.1;
						printf("%.2f",c);
						c=~a;
						printf("%.2f",c);
						c=b|a;
						printf("%.2f",c);
						c=a&b;
						printf("%.2f",c);
						c=a^b;
						printf("%.2f",c);
						return 0;
				}
#endif

#if 0
		//const qualifier expriment
#include<stdio.h>
		int main()
		{
				const int const_var = 5;
				printf ("Value of const_var = %d \n",const_var);
				const_var += 5;
				printf ("Value of const_var = %d \n",const_var);
				return 0;
		}
#endif

#if 0
		// try to understand disassembly code
#include<stdio.h>
		main()
		{
				int i=2;
		}
#endif

#if 0
#include<stdio.h>
		main()
		{
				static int static_var=0;
				for (;static_var++<=5;)
				{
						printf("Value of static_var is %d\n",static_var);
				}
		}
#endif

#if 0
#include<stdio.h>
		int a=4;
		static int b=3;
		int main()
		{
				int c=1;
				static int d = 1;
				register int g = 1;
				return 0;
		}
#endif

#if 0
#include<stdio.h>
		main()
		{
				/*	unsigned long a= 1ul;
					long b=-1l;
					if(a>b)
					{
					printf("a is greater than b");
					}
					else
					{
					printf("b is greater than a");
					}
					printf("\nb=%lx",b);*/
				printf("\nsize of long long is %d\n",sizeof(long double));
		}
#endif

#if 0
		main()
		{
				unsigned short a;
		}
#endif	

#if 0
		main()
		{
				int a = 1, b = -100;
				printf("\n%x\n%d\n",b>>a,b>>a);
		}
#endif

#if 0
		main()
		{
				int a = -1, b= 2;
				printf("%d\n",a/b);
		}
#endif

#if 0
		main()
		{
				int a = 33;
				printf("%x\n",15>>a);
		}
#endif

#if 0
		main()
		{
				int a,b,c,d;
				a=5;b=6;
				printf("%d\n",a+b);
				c=7;d=8;
				printf("%d\n",c+d);
				a=2;d=1;
				printf("%d\n",a+d);
		}
#endif

#if 0
		main()
		{
				int a=c=15;
				int m=32;
				int b=35;
				int n;
				n=a;
				printf("%d\n%08x\n",a,a);
				while (m--) {
						if (n & 0x80000000)
								printf("1");
						else
								printf("0");
						n <<= 1;
				}
				printf("\n");
				a<<=b;
				m=32;
				n=a;
				printf("%d\n%08x\n",a,a);
				while (m--) {
						if (n & 0x8000000)
								printf("1");
						else
								printf("0");
						n <<= 1;
				}
				printf("\n");
		}
#endif

#if 0

		main()
		{
				printf("%08x\n",15<<35);
		}
#endif

#if 0 
		main()
		{
				int a=35;
				printf("%08x\n",15<<a);
		}
#endif

#if 0
		int main()
		{
				fact(5);
				return 0;
		}
		int fact(int n)
		{
				if(0==n)
						return 1;
				else
						return(n*fact(n-1));
		}
#endif

#if 0 

		int ack(int m, int n) {

				if ((m < 0) || (n < 0)) return 0;
				if ( m == 0) return (n+1);
				if ((m > 0) && (n == 0))
						return (ack(m-1, 1));
				if ((m > 0) && ( n > 0))
						return ( ack(m-1,ack(m,n-1)));
		}

		int main (){
				int m = 4 , n = 5, y;
				y = ack(m,n);
				printf(" %d\n", y);
		}

#endif

#if 0
		// Analysing global variable function stack
		int a=5;
		main()
		{
				int i;
				i=a;
		}
#endif


#if 0
		int main()
		{
				float a = 2.6;
				if(a>2.6)
						printf("\n\ntrue\n\n");
				else
						printf("\n\nfalse\n\n");
		}
#endif

#if 0
		int i=5;
		main()
		{
				while(i--)
				{
						printf("%d\n",i);
						main();
				}
		}
#endif

#if 0
		int a=20;
		int a;
		int a;
		int a;
		int a;
		main()
		{
				printf("%d\n",a);
		}
#endif


#if 0

		int a=10;
		void fun(void)
		{
				static int a=21;
				printf("%d\n",a);
				printf("%p\n",&a);
		}
		main()
		{
				fun();
				printf("%d\n",a);
				printf("%p\n",&a);
		}

#endif

#if 0
		auto int i=10;
		main()
		{	
				printf("%d\n",i);

		}
#endif

#if 0
		main()
		{
				if(1)
						;
				if(1)
						;
				else 
						;
				else
						;
		}
#endif

#if 0
		main()
		{
				int a;
				6=a;
		}
#endif

#if 0
		main()
		{
				int a=3;
				int i=1;
				switch(a)
				{
						case 1: break;
						case 2: i=1;
								while(i<2)
								{
										printf("GESL\n");
										case 3: if(a<6)
														i=i+8;
												i++;
								}
								break;
						default : break;
				}
		}
#endif
#if 0
		int main()
		{
				int a = -1;
				printf("%08x\n",15<<a);
				return 0;
		}
#endif

#if 0
		main()
		{
				int y=add(4,5);
		}
		int add(a,b)
		{
				int a, b;
				int c;
				c= a+b;
				return c;
		}

#endif

#if 0
		main()
		{
				printf("MAX = %d\n",MAX);
		}
#endif

#if 0
		int main (void)
		{
				if (sizeof (int) > -1)
						printf ("hello\n");
				else
						printf ("hai\n");

				return 0;
		}
#endif

#if 0
#include<stdio.h>
		int main()
		{
				void fun(void);
				fun();
				return 0;

		}
		void fun(void)
		{
				printf("file %s function %s line =%d\n",__FILE__,__FUNCTION__,__LINE__);
		}
#endif


#if 0
#define MARKS(subject,no) marks_##subject=(100*no)
		int main()
		{
				int marks_chem, marks_maths;
				printf("%d %d \n",MARKS(chem,0.8),MARKS(maths,1));
				return 0;
		}
#endif	
#define MPVPRINT(expr) printf(#expr" = %d \n",expr)
#if 0
		main()
		{
				int a;
				a=0x20;
				MPVPRINT(a);
		}
#endif 
#if 0
		main()
		{
				int x=0,y=0,z=0;
				((x,y,z))=((x,y,z))+2;
				MPVPRINT(x);
				MPVPRINT(y);
				MPVPRINT(z);
		}

#endif

#if 0
		main()
		{
				int i=5;
				switch(i)
				{
						default:	printf("hi");
						case 5:		while(i>=0)
									{
											printf("%d\n",i);
											i--;
											break;
									}
									printf("Hello");
									break;
						case 3: 	printf("hgbhgb");
									break;
				}
		}
#endif

#if 0
		main()
		{
				PF("GESL");
		}
#endif

#if 0
		int main()
		{
				void *p;
				int i=0x5042;
				p=(int *)&i;
				PF("%d\n",*(int *)p);
				PF("%c\n",*(char *)p);
				return 0;
		}
#endif

#if 0
		int main()
		{
				char a[5];
				int i,j;
				i=a;
				j=&a;
				MPVPRINT(i);
				MPVPRINT(j);
				i=a+1;
				j=&a+1;
				MPVPRINT(i);
				MPVPRINT(j);
				return -1;
		}
#endif

		/*
#define DEC(a) if (a>=0){ MPVPRINT(a);DEC(a--);}
int main()
{
int i=10;
DEC(i);
return 0;
}
		 */

#if 0
int main()
{
		int b=10;
		//	static int a=b;
		MPVPRINT(a);
		return 0;
}
#endif

#if 0 
int *p;
int **x;
int *y;
int a=4;
int main()
{
		int b=10;
		p=&a;
		*p=&b;
		x=&p;
		y=*x;
		return 0;

}
#endif

#if 0
int a;
int main()
{
		static int i;
		int b =20;
		i=b;
		a=b;
		MPVPRINT(i);
		MPVPRINT(a);

		return 0;
}
#endif

#if 0
int main()
{
		int *chl;
		printf("%d\n",&chl);
		return 0;
}
#endif

#if 0
int main()
{
		int n=6;
		int *p;
		//	*p=n;
		int **a;
		a=&p;
		PF("%p\n",&p);
		PF("%p\n",a);
		return 0;
}
#endif

#if 0 
int main(void)
{
		char *str = "Global Edge";
		//	char* str;
		//	str="Global Edge";
		PF("%s\n%p\n",str,str);
		return 0;
}
#endif

#if 0
void mystrcpy(char *s, char *t);
int main()
{
		char *s;
		char *d;
		d=(char *)malloc(20);
		s="Global Edge";
		mystrcpy(s,d);
		PF("%s\n",d);
		PF("%p\n",d);
		PF("%p\n ",s);
		return 0;
}

void mystrcpy(char *s, char *t)
{
		while(*t++=*s++)
				;
		return;
}
#endif

#if 0
int main()
{
		int a[3]={[0]=1,[2]=2};
		int i;
		for(i=0;i<3;i++)
				MPVPRINT(a[i]);
		return 0;
}
#endif

#if 0
#define MAX 10
void fun(void); 
int main()
{
		printf("Max = %d\n",MAX);
#undef MAX 
		fun();
		printf("Max = %d\n",MAX);
		return 0;
}

void fun(void)
{
		printf("Max = %d\n",MAX);
}
#endif

#if 0
int main(void)
{
		char src[]="hi";
		char dest[]="helo";
		dest=src;
		printf("%s\n",src);
		return 0;
}
#endif

#if 0
void foo(int *n)
{
		printf("%d\n",*n);
		return;
}
int main(void)
{
		int i;
		printf("Enter a number: ");
		scanf("%d",&i);
		foo(&i);
		return 0;
}
#endif

#if 0
int main(void)
{
		int a = 320;
		char *ptr;
		ptr = (char*)&a;
		printf("%d\n",*ptr);
		return 0;
}
#endif

#if 0

int main(void)
{
		int a = 5; ;
		printf( "abcdefghijklmnopqrstuvwxyz"+a);
		return 0;
}
#endif

#if 0
int main(void)
{	
		char* s = "vishwas";
		char* p = "vishwas";
		printf("%p\n",s);
		printf("%p\n",p);
		return 0;
}
#endif

#if 0
int main(void)
{
		char t [0][5] ={ {10}};
		return 0;
}
#endif

#if 0
void mystrcpy (char *, char *); 
int main (void)
{
		char a[8] = "hello";
		char b[2] = "hai";
		printf ("a = %s\n",a);
		printf ("b = %s\n",b);
		printf ("&a = %p\n",a);
		printf ("&b = %p\n",b);
		strcpy(a,b);
		printf ("a = %s\n",a);
		printf ("b = %s\n",b);
		//	mystrcpy(a,b);
		//  printf ("a = %s\n",a);
		//  printf ("b = %s\n",b);

		return 0;
}

void mystrcpy (char * dest, char * src)
{
		while((*dest++ = *src++))
				;
}
#endif
#if 0
int main(void)
{	
		struct what {
#endif
