#include    <uma.h>
int main (void) {
		char buf[50]="111";
		char buf2[50]="111";
		char res[50];
		int variable=0;
		int variable2=0;
		
		while(*(buf+strlen(buf)-variable)){
				while(*(buf2+strlen(buf2)-variable2)) {
			 			res[strlen(buf2)+strlen(buf)+1]=(atoi(*(buf+strlen(buf)-variable))+atoi(*(buf2+strlen(buf2)-variable)));
				}
}
		printf("%s\n",res);
}

