#include    <uma.h>
int main (void) {
		FILE  *fp = fopen("kill1.txt", "r+");
		char ch;
				__fpurge(stdin);
		while( ((ch = fgetc(fp)) != EOF) && /*ch != '\n'*/1)  
				__fpurge(stdin);
		{		
				ch^=( 1<<5 ) ;
				__fpurge(stdin);
			//	if(ch > 64 && ch < 91){
				fseek (fp , -1 , SEEK_CUR );
				__fpurge(stdin);
				fputc ( ch , fp );
				__fpurge(stdin);
			//	}
			//	else if(ch > 96 && ch < 123){
			//	fseek (fp , -1 , SEEK_CUR );
		//		fputc ( ch-32 , fp );
				}


//				fseek (fp , 1 , SEEK_CUR  );

}
