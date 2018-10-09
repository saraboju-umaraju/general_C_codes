#include    <uma.h>

#define SIZED 20

char* str_str(char* , char* );

int main (void) {

		char buf1[20];

		char buf2[20];


		printf("ENTER STRING ONE\n");

		if( fgets(buf1,SIZED,stdin)==NULL ){
				printf("FUNCTION HAS FAILED\n");
						return 0;
		}

		buf1[strlen(buf1)-1]='\0';

		printf("ENTER STRING TWO\n");

		if(fgets(buf2,SIZED,stdin)==NULL) {
				printf("FUNCTION HAS FAILED\n");
				return 0;
				
		}

		buf2[strlen(buf2)-1]='\0';
		

		printf("%s\n",str_str(buf1,buf2));

}


char* str_str(char *str, char *substr)
{
		while (*str) 
		{
				char *str_one = str;
				char *str_two = substr;

				while (*str && *str_two && *str == *str_two) 
				{
						str++;
						str_two++;
				}
				if (*str_two=='\0')
						return str_one;

				str = str_one + 1; 
		}
		return NULL;
}
