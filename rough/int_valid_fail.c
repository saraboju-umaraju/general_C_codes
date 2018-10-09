#include    <uma.h>

int integer_validation(char *input) {


		int sign_count=0;

		int variable=0;

		int space_dot_flag=0;

		int sign_pos=0;

		int flag=0;

		int dot_count=0;

		int dot_flag=0;

		int char_count=0;

		int sign_flag=0;

		int space_flag=0;

		int char_new_flag=0;

		int char2_flag=0;

		input[str_len(input)-1]='\0';

		while ( *(input+variable) ) {

				if(*(input+variable) == '.') {
						dot_count++;
				}
				if((*(input+variable) == ' ' || *(input+variable) == '\t' ) && ( 1 && char_count )) {
						if(dot_flag)
								space_dot_flag=1;
						space_flag=1;
				}

				if( ( (*(input+variable) ) < '0' || (*(input+variable)) >'9')  && ( (*(input+variable)) !=' ' && (*(input+variable)) !='\t' && (*(input+variable)) != '.'  &&   (*(input+variable)) != '+' && (*(input+variable)) !='-')) {
						flag=1;
				}
				else {
						if(*(input+variable)<='9' && *(input+variable)>='0'   ){
								char_count++;
//								char_flag=1;
								if(space_flag==1)
										char2_flag=1;
						}
				}
				variable++;
		}
		variable=0;

		while( *(input+variable) )  {


				if(*(input+variable) == '+' || *(input+variable) == '-'  )  {

						if( char_new_flag ) {

								sign_flag+=1;
						}
								else{
										sign_flag-=1;

						}
						sign_count++;

						if(*(input+variable)>='0' || *(input+variable)<='9'){

								char_new_flag=1;
						}

						sign_pos=variable;

				}

				variable++;

		}
		variable=0;
		while(*(input+variable) ) {
				if(space_flag && (*(input+variable) =='.'))
						dot_flag=1;

				variable++;
		}

		if( (sign_flag >= 0 || char_new_flag) ||dot_flag || char2_flag || flag || space_dot_flag || dot_count > 1 ||  sign_count > 1 || ( sign_pos > 0 && *( input + sign_pos + 1 ) == '\0') || (input[1]==0 && (input[0]=='+' || input[0]=='-'))  ) 
				printf("ENTERED NUMBER IS INVALID\n");
//						printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",sign_flag,char2_flag,flag,dot_count,sign_count,char_count,char_flag);

		return 1;
}

