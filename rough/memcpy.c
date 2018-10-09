int main()
{
int c1[8]={90,91,92,93,94,95,96,97};
int * c;//=(int*)malloc(sizeof(c1)*8);
//printf("%d",strlen(c1));
//strcpy(c,c1);
memcpy(c,c1,sizeof(c1));
printf("%d\n",c[1]);
printf("%d\n",c[2]);
printf("%d\n",c[3]);
printf("%d\n",c[4]);
printf("%d\n",c[5]);
printf("%d\n",c[6]);
printf("%d\n",c[7]);
printf("%d\n",c[0]);
printf("%p\n",c1);
printf("%p\n",c);
}
