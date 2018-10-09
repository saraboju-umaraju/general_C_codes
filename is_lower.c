# include	"head.h"

int is_lower(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_lower(getchar());
	if(ret){
		printf("bingo we have a lowercase letter\n");
	}
	else {
		printf("sad! thats not a lowercase letter\n");
	}
	
	return 0;
}

	int is_lower(int c)
	
	{
		
			if( c > 96 && c < 123 ) 
	
					{	
						return 2;
											
									}
					else return 0;
			}
