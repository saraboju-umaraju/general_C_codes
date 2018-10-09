# include	"head.h"

int is_cntrl(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_cntrl(getchar());
	if(ret){
		printf("yes that is a control character\n");
	}
	else {
		printf("false you! not a control character\n");
	}
	
	return 0;
}

	int is_cntrl(int c)
	
	{
		
			if( (c >= 0 && c<= 31 ) || c==127)
	
					{	
						return 2;
											
									}
					else return 0;
			}
