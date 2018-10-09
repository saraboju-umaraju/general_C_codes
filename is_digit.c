# include	"head.h"

int is_digit(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_digit(getchar());
	if(ret){
		printf("good job! this is a digit\n");
	}
	else {
		printf("no it`s not a digit\n");
	}
	
	return 0;
}

	int is_digit(int c)
	
	{
		
			if (c < 58 && c > 47) 
	
					{	
						return 2;
											
									}
					else return 0;
			}
