#include <uma.h>

char *_strtok( char *str, const char *delim)
{
		char *temp1;

		char *temp2;

		static char *ptr = NULL;

		char *result=malloc(1000);

		if(ptr == NULL ){

				ptr = str;

		}

		temp1 = ptr;

		temp2 = (char*) delim;

		while(*temp1){

				if( (*temp1 != *temp2) && ( *temp2 != '\0') ){

						temp2++;
						continue;

				}else {


						if(*temp1 == *temp2){

								*temp1 = '\0';

								result = ptr;

								temp1++;
								
								ptr = (char*)temp1;

								return result;

						}

						if(*temp2 == '\0'){

								temp2 = (char*)delim;

								temp1++;

								continue;

						}

				}

		}

		return NULL;

}
