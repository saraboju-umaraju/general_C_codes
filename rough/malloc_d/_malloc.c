#include	<stdio.h>

#include	<stdlib.h>

int main(void)

{

		int *p ;
		
		if( (p = malloc(4)) == NULL){

				printf("failed\n");
			
				exit(1);

		}

	return 0;

}
