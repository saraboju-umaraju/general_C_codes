#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <signal.h>

int main( void )
{

		syscall(SYS_tgkill, getpid(),  syscall(SYS_gettid) , 11);
}

