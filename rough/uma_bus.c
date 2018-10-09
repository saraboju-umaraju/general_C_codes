#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
        char *cptr;
        int *iptr;



        __asm__("pushf\norl $0x40000,(%esp)\npopf");

        /* malloc() always provides aligned memory */
        cptr = (char*)malloc(sizeof(int) + 1);

        /* Increment the pointer by one, making it misaligned */
        iptr = (int *) ++cptr;

        /* Dereference it as an int pointer, causing an unaligned access */

        *iptr = 42;

        return 0;
}
