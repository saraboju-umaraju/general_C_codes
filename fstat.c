/*struct stat {
  dev_t st_dev;
  ino_t st_ino;
  mode_t st_mode;
  nlink_t st_nlink;
  uid_t st_uid;
  gid_t st_gid;
  dev_t st_rdev;
  off_t st_size;
  blksize_t st_blksize;
  blkcnt_t st_blocks;
  time_t st_atime;
  time_t st_mtime;
  time_t st_ctime;
  };*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main ( void ) 
{

	struct stat inst ;

	int fd = open ( "/dev/pts/10" , "r" ) ;

	perror("open status");

	stat ( "/dev/pts/10" , &inst ) ;

	perror("stat status");

	printf("term size is %d\n" , inst . st_size);
	
	printf("term size is %d\n" , inst . st_ino);

	close ( fd ); 

	}

