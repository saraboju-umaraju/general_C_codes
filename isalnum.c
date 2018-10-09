# include	"head.h"

int is_alnum(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_alnum(getchar());
	if(ret){
		printf("yes! this is a alphanumeric value\n");
	}
	else {
		printf("ahhhhh! this isnt alphanum i afraid\n");
	}
	
	return 0;
}

	int is_alnum(int c)
	
	{
		
			if( (c < 58 && c > 47) || ( c > 64 && c <91 ) || ( c > 98 && c < 123 ) )
	
					{	
						return 2;
											
									}
					else return 0;
			}
