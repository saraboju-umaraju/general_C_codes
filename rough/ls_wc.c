#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)

{

		int pip[2];

		pid_t f1 , f2 , f3 ;

		int f_val = 0;

		char buff[10];

		/*fork starts */

		f1 = fork () ;

		if ( f1 == 0 ) {

				pipe(pip); //for parent and child 

				f_val = fork();

				if(f_val > 0){

						wait(NULL);

						close (0);

						dup(pip[0]);

						close(pip[1]);

						execlp("wc","wc",NULL);

				}

				else if( f_val == 0){

						close (1);

						dup(pip[1]);

						execlp("ls","ls",NULL);

				}
			else return printf("fork failed\n");

		} 

		else if ( f1 > 0 ) {

				wait(NULL);

				printf("parent returning\n");

				return 0 ;

		}
		else 
				printf("fork has failed\n");

		return 1 ;

}
