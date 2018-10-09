#include <stdio.h>
#define GC fgetc(f)
int main()
{
		FILE *f=fopen("filed.c","r+");
		char name[12];
		char num[12];
		int id;
		char cc;
		int i;
		int flag=0;
		int tem;
		printf("tell me whose phno to be changed \nenter id\n");
		scanf("%d",&tem);

		while(!feof(f)){
				fscanf(f,"%s%d%s",name,&id,num);
				if(tem==id){
						flag=1;
						printf("name is %s	empid %d phone num is %s\n",name,id,num);
						break;
				}
		}
		if(flag==0){
				printf("no record found\n");
				return 0;
		}
		do{
				if(flag==1)
						fseek(f,-4,SEEK_CUR);
		}while(flag=1,GC!=name[2] && GC!=name[1] && GC!=name[0] );
		fseek(f,-3,SEEK_CUR);
		while(GC!='\n'){
				fseek(f,-1,SEEK_CUR);
				fputc(' ',f);}

}

