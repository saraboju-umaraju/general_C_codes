#include	<stdio.h>

int b_sort( int* a,int c )

{
		int remp;
		int i=0;
		int j=0;

		
		
	while( j < c -1){						//outside loop
		
				while( i < c-j-1 ){					//inside loop
		
						if( a[ i ] > a[ i +1 ]){				//condioiton check
								
								remp=a[i];
								a[i]=a[i+1];
								a[i+1]=remp;
		
						}//if ends
		
						i++;//increment inside while loop
		
				}j++;i=0;//inside end
		
		}//out side end
	
		return 0;//	disp(&a,c);
}//main ends
