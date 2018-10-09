#include "header.h"

int intval( void)
{

	int b;

	int val = 0;

	int result=0;

	int set = 0;

	int sign = 0;

	int set1 = 0;

	int d = 1;

	int dot = 0;

	char *a = (char *)malloc(sizeof(char)*SIZE);

	__fpurge(stdin);
	
	fgets(a,SIZE,stdin);

	for(b=0;a[b+1];b++){


		if(((a[b] >= '0') && (a[b] <='9')) || a[b] == ' ' || a[b] == '+' || a[b] == '-' || a[b] == '.' || a[b] == '\t' || a[b] == '\0' ){

				if(a[b] == '\0'){

						printf("INVALID INPUT\nENTER AGAIN\n");
						
							val = intval();
					
							return val;

										}

			if(a[b]== '.'){

				if(dot < 1){	

					dot++;	

					continue;

				}

				else{

					printf("INVALID VALUE:WRONG USAGE OF DOTS\nENTER PROPER INPUT\n");

					val = intval();
					
					return val;

				}
			}

			if(a[b] == '+' || a[b] == '-' ){

				if(set==0 && sign < 1 ){

					if(a[b] == '-')

						d = -1;

					sign++;

					continue;

				}

				else
				{

					printf("INVALID VALUE:WRONG USAGE OF SIGNS\nENTER PRORER INPUT\n");
				
					val = intval();
					
					return val;

				}



			}

			if(a[b]>='0' && a[b]<='9' && sign<=1){

				set = 1;

				if(set1 < 1){
				
						if(dot){
				
						return (result*d);	
						}
						else{

					result = (a[b] - '0') + result * 10;

					continue;
					
					}

				}

				else 
				{

					printf("INVALID VALUE:WRONG USAGE OF SPACES\nENTER AGAIN\n");

					val = intval();
					
					return val;

				}	

			}

			if((a[b] == ' ' || a[b] == '\t') && (set || dot))

					set1++;


		}

		else{

					printf("INVALID VALUE:SYMBOLS AND CHARACTERS NOT ALLOWED\nENTER AGAIN\n");

					val = intval();
					
					return val;

		}
	}

	return (result*d);

}
