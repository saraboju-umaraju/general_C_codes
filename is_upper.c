# include	"head.h"

int is_upper(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_upper(getchar());
	if(ret){
		printf("bingo we have a uppercase letter\n");
	}
	else {
		printf("sad! thats not a uppercase letter\n");
	}
	
	return 0;
}

	int is_upper(int c)
	
	{
		
			if( c > 64 && c <91 ) 
	
					{	
						return 2;
											
									}
					else return 0;
			}
