#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
//#include <linux/user.h> 

#define EBX 0
#define ECX 1
#define EDX 2
#define ESI 3
#define EDI 4
#define EBP 5
#define EAX 6
#define DS 7
#define ES 8
#define FS 9
#define GS 10
#define ORIG_EAX 11
#define EIP 12
#define CS  13
#define EFL 14
#define UESP 15
#define SS   16
#define FRAME_SIZE 17

int main()
{   pid_t child;
    long orig_eax;
    child = fork();
    if(child == 0) {
        ptrace(PTRACE_TRACEME, 0, NULL, NULL);
        execlp("runlevel", "ls", NULL);
	//write(1, "hello" , 5 ) ;
    }
    else {
        wait(NULL);
	int in = 0 ;
	while ( in < 18 ) {
        orig_eax = ptrace(PTRACE_PEEKUSER, child, 4 * in++ ,NULL);
        printf("syscall made is %ld\n", orig_eax);
	}
	getchar();
        ptrace(PTRACE_CONT, child, NULL, NULL);
    }
    return 0;
}
