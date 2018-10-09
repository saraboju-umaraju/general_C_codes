int main()
{
char * p="uma rju";
char **w;
w = &p;
char ***m=&w;
char ****t=&m;
//*(&p+1)='u';
//printf("%c\n%c\n%p\n%p\n",*++p,,&p,&p+1);
//printf("%p",&p);
printf("%s\n",p);
printf("%s\n",*w);
printf("%s\n",**m);
printf("%c\n",*p);
printf("%c\n",**w);
printf("%c\n",***m);
printf("%s\n",***t);
printf("%c\n",****t);

//printf("%d\n", getpid());
//while(1);



}
