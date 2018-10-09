struct ab
{
        char* a;
        int b;
        int c;
        
};
struct ab y ={"547895",5,1};
struct ab *p=&y;


int main()
{
      //  char *pp ="uma";
    //    printf("%s\n",*pp++);
       // printf("%c\n",*pp);

printf("%c\n",*(p->a)++);
printf("%c\n",*(p->a));
}
