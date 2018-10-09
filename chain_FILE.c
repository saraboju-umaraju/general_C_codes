#include	<stdio.h>

#include	<stdlib.h>

int main ( void )
{

		struct _IO_FILE *fp ;
		
		struct _IO_FILE *fpp ;

		printf("size of struct is %zu", sizeof ( struct _IO_FILE) ) ;

		if ( NULL == (fp = fopen ( "somefile.noext" , "w+") ) ) {

				perror("opening file");

				exit ( EXIT_FAILURE ) ;

		}

		if ( NULL == (fpp = fopen ( "somefile.noext" , "w+") ) ) {

				perror("opening file");
			
				fclose (fp); //easy mem leak

				exit ( EXIT_FAILURE ) ;

		}
		#if 0
		printf(" -----------> data in stdout %s" , stdout -> _IO_read_ptr);

//		fflush( fp );
		
		printf("stdout %p\n" , stdout);
		
		printf("stdin %p\n" , stdin);
		
		printf("stderr %p\n" , stderr);
		
		printf("stdout chain %p\n" , stdout -> _chain);
		
		printf("stdin chain %p\n" , stdin -> _chain );
		
		printf("stderr chain %p\n" , stderr -> _chain );

		printf("fp chain %p\n" , fp -> _chain );
		
		printf("fpp chain %p\n" , fpp-> _chain);

		printf("fpp %p\n" , fpp );
		
		printf("fp %p\n" , fp );
	
		#endif

		
		printf("stdout inode %p\n" , stdout -> f_inode);

		fclose(fp);
		
		fclose(fpp);

}

