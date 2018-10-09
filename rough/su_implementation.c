#define _GNU_SOURCE         /* See feature_test_macros(7) */

#include <unistd.h>

#include <sys/syscall.h>   

#include <stdio.h>

#include <uma.h>

#define MY_CALL 380

#define SIZE 100

int main ( void ) 

{
		if ( !syscall( MY_CALL ) ) {

				puts(G"**************WELCOME TO SUPERUSER MODE******************"Z);

				while( 1 ) {

						printf(R"root@umaslaZ # "Z);

						char buf[SIZE] = { '\0' };

						int j = 0;

						char *argv[SIZE];

						fgets(buf,SIZE,stdin);

						argv[0] = strtok( buf,"\n ");

						while ( argv[j] && j < SIZE ) {

								argv[++j] = strtok ( NULL , "\n ");

						}

						if ( fork() == 0 ) {

								execvp ( argv[0] , argv );

								puts("sorry no such command");

								exit(0);

						}
						else {
								wait(NULL);

						}
				}

		}

		else puts("not in this version of kernel");

		return 0 ;
}

