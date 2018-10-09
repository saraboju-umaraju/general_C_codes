#include <string.h>

#include <uma.h>

int count =  1 ;

void partition(char *str, int left, int right)
{
	int index;

	if (left == right)

		printf("%s %d\n", str , count++);

	else
	{
		for (index = left; index <= right; index++)

		{
			SWAP(*(str+left), *(str+index));

			partition (str, left+1, right);

			SWAP(*(str+left), *(str+index)); 

		}

	}

}

int main()
{
	char str[100] = {} ;
	

	puts("enter a word") ;

	in_string( str , 99 ) ; 
	
	int n = strlen(str);

	partition(str, 0, n-1);

	return 0;
}
