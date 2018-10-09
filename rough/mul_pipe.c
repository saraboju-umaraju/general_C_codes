#include	<stdio.h>

#include	<unistd.h>

int main ( void ) 
{
		int fd[2] = {} ;

		if ( pipe ( fd ) < 0 ) {

				return 1 ;

		}

#define readfd fd[0]

#define writefd fd[1] 

		pid_t ch_pid = -1 ;

		ch_pid = fork() ;

		if ( ch_pid == 0 ) {

				//do ls write to pipe[1]

				close ( 1 ) ;

				dup( writefd ) ;

				close ( readfd ) ;

				execlp ( "ls" , "ls" , NULL ) ;

		}else if ( ch_pid > 0 ) {

				close ( 0 ) ; 

				dup( readfd ) ;

				close ( writefd ) ;

				execlp ( "wc" , "wc" , NULL );

		}else 

				return 1 ;

		return 0 ;

}


