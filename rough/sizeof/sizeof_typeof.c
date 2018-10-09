#define soft(type,size) do { \
        type *p, *q; \
        p=q; \
        p++; \
        size=(char*)p-(char*)q; \
} while(0)


        struct abc{
                char a;
                char c;
                int b;
        };

int main()
{
        struct abc e;
        int size=0;
        soft(char, size);
        printf("Size of char: %d\n",size);
        soft(int, size);
        printf("Size of int: %d\n",size);
        soft(long int, size);
        printf("Size of long int: %d\n",size);
        soft(float, size);
        printf("Size of float: %d\n",size);
        soft(double, size);
        printf("Size of double: %d\n",size);
        soft(struct abc, size);
        printf("Size of struct abc: %d\n",size);
        return 0;
}
