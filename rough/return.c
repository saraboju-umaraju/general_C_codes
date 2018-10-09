#include	<stdio.h>
#include	<pthread.h>
int global = 1 ;
int main ( void ) 
{
	printf("passed 1 returned %d\n",call(1));
	
	printf("passed 2 returned %d\n",call(2));
	
	return 0 ;
}

int call( int data ) 
{
	return data ^ 3;

}
