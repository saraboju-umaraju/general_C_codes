#include	<uma.h>
void fun1(char *);
void fun2(void);
void fun3(void);
int main(int argc,char** argv)
{
		fun1(argv[1]);
		printf("EXECUTED NORMALLY\n");
		
}
void fun1(char *str ) {
		char buf[5];
		strcpy(buf,str);
}
void fun2() {
		printf("YOUR PROGRAM IS MESSED\n");
		exit(1);
}
void fun3() {
		printf("MESSED TWICE\n");
}
