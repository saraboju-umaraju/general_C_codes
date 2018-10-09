#include	<stdio.h>
#include<string.h>
void valid();
void invalid();	
int mm;
	char ch[40];

	int number;

	int a=0,b,count=0,space=0,spacecount=0,sign=0,i=0;
int main(void)
{
	fgets(ch,29,stdin);

	if(ch[i]=='\n'){

	printf("hey you enter anything other than this");
	return 0;
	}
	for(i=0;i<strlen(ch)-1;i++){	

		if((ch[i]<='9'&&ch[i]>='0')){

			spacecount=1;

				if(space==1)

				{	count=2;

				}

				else{

					count=1;

				space=0;
				}
	}

		else if(ch[i]=='+'||ch[i]=='-'){

			if(spacecount==0){	
				mm=i;
			sign++;

				}

			else

			invalid();
			}
		else if(ch[i]==' '){	

			if(count==0)		

				space=0;

				else 

				space=1;
				
					
}
			
		else
		{
		invalid();
			return 0;
			}	
}


	if(sign<=1&&count!=2){
		if((sign==1)&&ch[mm+1]!=' '){
		valid();
		}
		else if(sign==0){valid();}
		else
	 {invalid();
			return 0;
		}
	
	}
	
	else
	{ 
	invalid();
	return 0;
	}

	number=(atoi(ch));

	printf("%d\n",number);

}

	void valid()
	{
	printf("valid");
	}
	void invalid()
	{
	printf("inavlid");
	}
