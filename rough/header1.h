#include    <stdio.h>
#include    <stdlib.h>

# define INT_MIN   (-INT_MAX - 1)
# define INT_MAX   2147483647
# define MAX 100
void invalid(void);

int intval(char *s)
{
    int c;
    int i;
    int y;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    for(c = 0 ;s[c] ;c++ ) {
        if((s[0] == '\n' ||s[c] != '\n') && (s[c] != ' ') && (s[c] != '.' || ( (++c3) > 1 ) ) && (s[c] != '+') && (s[c] != '-') && ( (s[c] > 47 &&  s[c] < 58)  != 1 ) ) {
            invalid();
            return -1;
        }
        else if(c1 != 0 && s[c]  == ' ') {  for(i = c ;s[i] ;i++) {
                if( s[i] != ' ' && s[i] != '\n') {
                    invalid();
                    return -1;
                }
            }
            c = i - 1;
        }

        else if( s[c] == '+' || s[c] == '-') {
            c2++;
            if( c2 > 1 || c1 > 0 ) {
                invalid();
                return -1;
            }
        }

         if( s[c] != ' ') {
            c1++;
        }
    }
    y = atoi(s);
    if( c1 == 1 || (y > INT_MIN && y < INT_MAX) != 1 ) {
        invalid();
        return -1;
    }
    return y;
} 
	void invalid(void)
	{
	printf("double check and enter again\n");
	}
