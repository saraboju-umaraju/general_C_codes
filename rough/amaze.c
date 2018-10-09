#include <stdio.h>

 double m[]= {7709179928849219.0, 771}; 

int main() 
{    
	printf ("once %d\n",m[1]);	

	m[1]-- ? m[0]*=2 , main() : printf(m);    
	
}
