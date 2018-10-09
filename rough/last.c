#include	<uma.h>	

int fun(int b, int t)

{

		int i = 0, value;

		value = 1;

		if (t == 0)

				return value;

		for (i = t; i > 0; i--)

				value *= b;

		return value;

} 
