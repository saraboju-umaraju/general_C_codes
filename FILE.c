#include	<stdio.h>

#include	<stdlib.h>

int main ( void )
{

		struct _IO_FILE *fp ;

		int temp = 10 ;

		char* p = NULL ;

		int c = 0 ;

		printf("size of struct is %zu\n", sizeof ( struct _IO_FILE) ) ;

		if ( NULL == (fp = fopen ( "somefile.noext" , "w+") ) ) {

				perror("opening file");

				exit ( EXIT_FAILURE ) ;

		}

/*		while ( fgetc ( fp ) != EOF ) {

				printf("pointer read %p\n", fp -> _IO_read_ptr);

				* ( fp -> _IO_read_ptr ) = 65 ;
				
				printf("pointer write %p\n", fp ->  _IO_write_ptr );
				
			* ( fp -> _IO_write_ptr ) = 65 ;

			printf("%c  ",  *fp -> _IO_write_ptr );

		break ;

		}*/
	while( temp++ < 500)	
	
		fputc ( 65 , fp ) ;

		rewind ( fp ) ;
		
		/*printf("pointer read %p\n", fp -> _IO_read_ptr);
				
		printf("pointer write %p\n", fp ->  _IO_write_ptr );

		p = fp -> _IO_write_ptr ;

		printf("one %p\n", fp -> _IO_write_ptr);
		
		printf("one %p\n", p);

		strcpy(p , "badass");

		puts(p);

		rewind ( fp ) ;*/
		strcpy ( fp ->  _IO_write_ptr , "killler milller");

		perror("below strcpy"); 

		printf("pointer read %p\n", fp -> _IO_read_ptr);
				printf("pointer write %p\n", fp ->  _IO_write_ptr );
		rewind ( fp ) ;

		printf("pointer read %p\n", fp -> _IO_read_ptr);
				printf("pointer write %p\n", fp ->  _IO_write_ptr );
		perror("status rewind");
		printf("%s\n",fp -> _IO_read_ptr);
		printf("%s\n",fp -> _IO_write_ptr);
		printf("pointer read %p\n", fp -> _IO_read_ptr);
				printf("pointer write %p\n", fp ->  _IO_write_ptr );

		
		fputc ( 97 , fp ) ;

//		while ( (c = fgetc ( fp )) != EOF ) {

        /*        printf("pointer read %p\n", fp -> _IO_read_ptr);

                printf("pointer write %p\n", fp ->  _IO_write_ptr ); */

//			printf("%c",c);

  //      }

	//	printf("af while");

	//	printf("\n");


/*		perror("rewind status");

		printf("pointer end area %p\n", fp -> _IO_read_end );
		
		printf("pointer end area %p\n", fp -> _IO_buf_end );

		fclose ( fp ) ;

		perror("closing status");*/

		return 0 ;

}
