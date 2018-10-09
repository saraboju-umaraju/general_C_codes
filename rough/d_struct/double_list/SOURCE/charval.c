#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

char charvalid(void)
		
{

	char *a;
	
	char *c="NULL";

	int b;

	a = (char *)malloc(sizeof(char)*20);

	printf("enter string\n");

	__fpurge(stdin);

	fgets(a,30,stdin);

	for(b=0;a[b];b++){

		if(((a[b] >= 32) && (a[b] <= 126)) || (a[b]=='\t') || (a[b]=='\n')){

			if(a[b]=='\n'){
		
					a[b]='\0';
			
					return a[0];

			}

		}

		else{

			printf("INVALID VALUE:%c\n",a[b]);

			return c[0];

		}	


	}

	return c[0];

}
