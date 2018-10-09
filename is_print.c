# include	"head.h"

int is_print(int );
{
	int c;
	int ret;
	printf("enter a character\n");
	ret=is_upper((c=getchar()));
	if(ret){
		printf(" not possible to print your input\n");
	}
	else {
		printf("i can print that---> %c <--- \n",c);
	}
	
	return 0;
}

	int is_print(int c)
	
	{
		
			if( c > 127 || c <33 ) 
	
					{	
						return 2;
											
									}
					else return 0;
			}
