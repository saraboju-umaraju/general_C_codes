main()

{
        char *p;
        p=(char*)malloc(100);
        printf("%d\n", *(p-4));
		//*(p-4)=254;
        printf("%d\n", *(p-1));
//        printf("%p\n", (p+1));
  //      printf("%p\n", (p));
}
