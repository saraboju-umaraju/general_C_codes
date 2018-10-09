#include    <uma.h>


		void main( void )
		{

				close(0);
				char* p=malloc(1);
				FILE *fp=fopen("kan.c","w");
				printf("kanhaiya\n");//printf("%d\n",fp);
			//	fclose(stdin);
				printf( "The file handle for stdin is %d\n", fileno(fp ) );
			//	printf( "The file handle for stdout is %s\n", stdin );
				printf( "The file handle for stderr is %d\n", fileno( stderr ) );
			scanf("'c'",&p);
			P("%d\n",p);
		}
