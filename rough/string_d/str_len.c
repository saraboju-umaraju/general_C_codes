#include    <uma.h>

int str_len( char *input ) {
	
		int variable=0;

		int integer=0;   //counting no of chars
		
		while( input[integer++] ) 
				variable+=1;

		return variable;
}
