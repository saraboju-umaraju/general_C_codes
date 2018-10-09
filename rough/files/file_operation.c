#include	<stdio.h>
#include	<stdlib.h>
#define GC fgetc(f)
int main()
{
char *ch=(char*)calloc(25,sizeof(char));
FILE *f=fopen("file.c","r+");
char name[12];
char num[12];
int id;
int flag=0;
int tem;
int count=0;
char *chh=(char*)calloc(23,sizeof(char));
printf("enter id\n");
scanf("%d",&tem);

while(!feof(f)){
fscanf(f,"%s%d%s",name,&id,num);
if(tem==id){
flag=1;
printf("name is %s	empid %d phone num is %s\n",name,id,num);
printf("%c%c%c",name[0],name[1],name[2]);
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
while(!feof(f)){
putc(fgetc(f),stdout);
}
//fprintf()
}

