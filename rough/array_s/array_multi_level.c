int main()
{
        int a[][3]={1,2,3,4,5,6};
        int (*ptr)[2]=a;
        printf("%d  %d",(*ptr)[0],(*ptr)[2]);
}
