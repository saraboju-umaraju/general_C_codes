#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void
bus_handler(int sig, siginfo_t *si, void *vuctx)
{
        char buf[2];
#if 1
        /*                                                                                                                           
         * I happen to know that si_code can only be 1, 2 or 3 on this                                                               
         * particular system, so we only need to handle one digit.                                                                   
         */
        buf[0] = '0' + si->si_code;
        buf[1] = '\n';
        write(STDERR_FILENO, buf, sizeof(buf));
#else
        /*                                                                                                                           
         * This is a trick I sometimes use for debugging , this will                                                                 
         * be visible in strace while not messing with external state too                                                            
         * much except breaking errno.                                                                                                
         */
        write(-1, NULL, si->si_code);
#endif
        _exit(1);
}

int
main(int argc, char **argv)
{
        struct sigaction sa;
        char *cptr;
        int *iptr;

        memset(&sa, 0, sizeof(sa));

//        sa.sa_sigaction = bus_handler;
  //      sa.sa_flags = SA_SIGINFO;
    //    sigfillset(&sa.sa_mask);
      //  sigaction(SIGBUS, &sa, NULL);

#if defined(__GNUC__)
# if defined(__i386__)
        /* Enable Alignment Checking on x86 */
        __asm__("pushf\norl $0x40000,(%esp)\npopf");
# elif defined(__x86_64__)
        /* Enable Alignment Checking on x86_64 */
        __asm__("pushf\norl $0x40000,(%rsp)\npopf");
# endif
#endif

        /* malloc() always provides aligned memory */
        cptr = (char*)malloc(sizeof(int) + 1);

        /* Increment the pointer by one, making it misaligned */
        iptr = (int *) ++cptr;

        /* Dereference it as an int pointer, causing an unaligned access */

        *iptr = 42;

        return 0;
}
