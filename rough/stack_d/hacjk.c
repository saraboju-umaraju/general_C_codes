#include	<uma.h>
int fun(){
	//	char buf1[5]="AAAAAAAA";
//		char buf2[10]="BBBBBBBBBBBB";
		int  *ret=&ret;;

/*		int o=50;
		while(o--){
				printf("%c\n",*ret);
				ret--;
				printf("%p\n",ret);
		}
		printf("buf1  %p\n",buf1);
		printf("buf2 %p\n",buf2);
		printf("buf2+1 %p\n",&buf2+1);
		printf("adress ret %p\n",&ret);*/
		ret=ret+2;
		*ret=*ret+5;
//		__fpurge( stdin ) ;
		//printf("ret + 13  %p\n",ret);
	//	(*ret) += 8;
}
int main(void) {

		fun();
		
		printf ( "one\n" ) ;


		printf ( "two\n" ) ;
}
