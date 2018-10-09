int main()
{
        union kill
        {
                int a;
                char b;
        };
        union kill k;
        k.a=2;
        k.b='b';
        printf("%d  %c\n",k.a,k.b);
}

