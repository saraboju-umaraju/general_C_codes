/*
	integer validation
*/
#include"header.h"

extern int gv;

int  intval_input(void)
{

	int num = 0;
	int i = 0;
	char c = 0;
	char end = '\0';
	char arr[] = "2147483648";		// maximum value of int 
	char cnt_dot = 0;
	char cnt_char = 0;
	char space = 0;
	char flag_once = 0;
	char sign = 0;
	char tab = 0;
	char char_rang = 0;
	char dot = 0;

	while((c = getchar())){
		
		if((c == '\n') || (c == EOF))
			break;

		if((space == 0) && ((c == ' ') || (c == '\t')))
			continue;

		space = 1;

		if(flag_once == 0){
			
			flag_once = 1;

			if((c == '+') || (c == '-') || (c == '.')){

				if(c == '+')
					continue;

	  				else if(c == '-'){
						sign = 1;
						continue;
					}

					else if(c == '.'){

						dot++;
						continue;
					}
			}
			
		}

		if(!(((c >= 48) && (c <= 57)) || (c == '.') || (c == ' ') || (c == '\t'))){

			gv = -1;
			num = -1;
			return num;
		}

		if((c == ' ') || (c == '\t')){

			tab = 1;
			continue;
		}

		if(tab == 1){
		
			gv = -1;
			num = -1;
			return num;
		}

		if(c == '.'){
			cnt_dot++;

			if(cnt_dot > 1){
	
				gv = -1;
				num = -1;
				return num;

			}
				
			continue;
		}

		if(cnt_dot == 0)
			num = num * 10 + (c - 48);

		if(cnt_dot == 1)
			dot++;
		
		cnt_char++;

		if(cnt_char > 10){

			gv = -1;
			num = -1;

			return num;
		}

		if(char_rang == 0){
			
			if(c > arr[i])
				char_rang = 1;

			if(c < arr[i++])
				char_rang = 2;

		}

			end = c;
	}

		if((cnt_dot == 1) && (dot == 0)){
		
			gv = -1;
			num= -1;

			return num;
		}

		if(((cnt_char == 10) && (char_rang == 1)) || (cnt_char == 0)){
			gv = -1;
			num = -1;

			return num;

		}

		else if(((cnt_char == 10) && (char_rang == 0) && (end == '8') && (sign == 0))){
	
			gv = -1;
			num = -1;

			return num;
		}
         
		if(sign == 1)

			num = -num;
	
	return num;
}
