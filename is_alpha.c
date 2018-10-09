# include	"head.h"

int is_alpha(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_alpha(getchar());
	if(ret){
		printf("well! you've entered an alpha\n");
	}
	else {
		printf("bad ! that's not a alpha value\n");
	}
	
	return 0;
}

	int is_alpha(int c)
	
	{
		
			if( ( c > 64 && c <91 ) || ( c > 96 && c < 123 ) )
	
					{	
						return 2;
											
									}
					else return 0;
			}
