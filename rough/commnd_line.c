#include    <stdio.h>

int main (int arc , char ** arv ) {

		int o=2;

		while(arv[o+2]!=NULL){
		
				printf("%s\n",arv[o++]);

		}printf("%d\n",o);

}

