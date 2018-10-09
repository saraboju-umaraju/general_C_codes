#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <setjmp.h>
 
/* Size of the file in pages. */
#define FILE_SIZE	4
 
/* Environment and blocked signal state for restoration in a signal handler. */
static sigjmp_buf sj_env;
 
static void sigbus_hdl (int sig, siginfo_t *siginfo, void *ptr)
{
 
	/* Jump (goto) to the saved program state where we don't use mmapped()
	 * memory. */
	siglongjmp (sj_env, 1);
}
 
int main (int argc, char *argv[])
{
	struct sigaction act;
	int fd = -1;
	char *mem = NULL;
	size_t file_size;
 
	memset (&act, 0, sizeof(act));
	act.sa_sigaction = sigbus_hdl;
	act.sa_flags = SA_SIGINFO;
 
/*	if (sigaction(SIGBUS, &act, 0)) {
		perror ("sigaction");
		return 1;
	}
 */
	file_size = sysconf(_SC_PAGE_SIZE) * FILE_SIZE;
 
	fd = open ("file_for_mmap", O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd < 0) {
		perror ("open");
		return 1;
	}
 
	/* Enlarge the file to file_size bytes. */
	if (ftruncate(fd, file_size) < 0) {
		perror ("ftruncate");
		return 1;
	}
 
	mem = mmap (NULL, file_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);
	if (mem == MAP_FAILED) {
		perror ("mmap");
		return 1;
	}
 
	/* Remember this point as a state that we can return to using
	 * siglongjmp(). If this function returns a value other than 0
	 * it means that we are here because of siglongjmp().
	 */
	if (sigsetjmp(sj_env, 1)) {
		fprintf (stderr, "Failed to read from mapped file\n");
 
		if (mem) {
			if (munmap(mem, file_size) < 0) {
				perror ("munmap");
				return 1;
			}
		}
 
		if (fd >= 0)
			close (fd);
 
		return 1;
	}
 
	if (argc > 1 && !strcmp(argv[1], "shrink")) {
 
		/* Shrink the file to half of it's size. */
		if (ftruncate(fd, file_size / 2) < 0) {
			perror ("ftruncate");
			return 1;
		}
	}
 
	/* Read from mmapped() memory. */
	if (memchr(mem, 'd', file_size)) {
		puts ("found 'd'!");
	}
	else
		puts ("'d' not found");
 
	munmap (mem, FILE_SIZE);
	close (fd);
 
	return 0;
}
