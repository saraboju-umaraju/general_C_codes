# include	<stdio.h>
# include	<stdlib.h>
# define GG __fpurge(stdin);
struct student
{
		char name[120];
		int empid;
		char phno[13];
};
typedef struct student stud;
void update();
void  new_ent(stud*);
void show(void);
void rem_det();

int main(void)
{
		stud uma1;
		int ch;
		int i;
		while(1){


				printf("\twelcome newbee!\n\t***MENU***\n\t1.update details\n\t2.show details\n\t3.remove details\n\t5.create new entery\n\t99.exit\n");

				__fpurge(stdin);

				scanf("%d",&ch);

				switch(ch)
				{
						case 5:
								new_ent(&uma1);
								break;                                                            
						case 2:
								show();
								break;
						case 1:
								update();
								break;
						case 3:
								rem_det();
								break;
						case 99:
								exit(0);
						default:
								printf("you have entered a wrong choice\n");
				}

		}


		return 0;
}

void new_ent(stud *uma1)
{


		FILE *fp=fopen("file.c","a+");
		printf("enter name\n");
		GG
				scanf("%s",uma1->name);
		printf("enter empid\n");
		GG
				scanf("%d",&uma1->empid);
		printf("enter phone number\n");
		GG
				scanf("%s",uma1->phno);
		fprintf(fp,"%s %d %s\n",uma1->name,uma1->empid,uma1->phno);
		//	fputc('\n',fp);
		fclose(fp);

}

void show(void)
{		
		char ch;
		int tem=0;
		int flag=0;
		char nam[19],num[12];
		int id;
		FILE *f=fopen("file.c","r+");
		printf("tell me id\n");
		scanf("%d",&tem);
		while(!feof(f)){
				fscanf(f,"%s%d%s",nam,&id,num);
				if(tem==id){
						flag=1;
						printf("name is %s  empid %d phone num is %s\n",nam,id,num);
						break;
				}
		}
		if(flag==0){
				printf("no record found\n");


		}
}


void rem_det()
{
#define GC fgetc(f)
		FILE *f=fopen("file.c","r+");
		char name[12];
		char num[12];
		int id;
		char cc;
		int i;
		int flag=0;
		int tem;
		printf("whose data you wanna delete\n");
		scanf("%d",&tem);

		while(!feof(f)){
				fscanf(f,"%s%d%s",name,&id,num);
				if(tem==id){
						flag=1;
						printf("name is %s  empid %d phone num is %s\n",name,id,num);
						break;
				}
		}
		if(flag==0){
				printf("no record found\n");
				exit(0);
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

void update()
{

#define GC fgetc(f)
		FILE *f=fopen("file.c","r+");
		char name[12];
		char num[12];
		int id;
		char cc;
		int i;
		int flag=0;
		int tem;
		printf("tell me id\n");
		scanf("%d",&tem);

		while(!feof(f)){
				fscanf(f,"%s%d%s",name,&id,num);
				if(tem==id){
						flag=1;
						printf("name is %s  empid %d phone num is %s\n",name,id,num);
						break;
				}
		}
		if(flag==0){
				printf("no record found\n");
				exit(1);
		}
		do{
				if(flag==1)
						fseek(f,-4,SEEK_CUR);
		}while(flag=1,GC!=num[2] && GC!=num[1] && GC!=num[0] );
		fseek(f,-2,SEEK_CUR);
		for(i=0;i<5;i++){
				printf("enter %d num\n",i+1);
				__fpurge(stdin);
				cc=getchar();
				fputc(cc,f);
		}
		//	fputc('\n',f);
}


