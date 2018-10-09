# include	"head.h"

int is_xd(int );
{
	int ret;
	printf("enter a character\n");
	ret=is_xd(getchar());
	if(ret){
		printf("it can be a hexa digit\n");
	}
	else {
		printf("no thats not a hexa number\n");
	}
	
	return 0;
}

	int is_xd(int c)
	
	{
		
			if( (c < 58 && c > 47) || ( c > 64 && c < 71 ) || ( c > 96 && c < 103 ) )
	
					{	
						return 2;
											
									}
					else return 0;
			}
