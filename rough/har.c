main()
{
		char a[5]="global";
		char b[2] ="vivv";
		printf("%s\n",strcpy(b,a));
//		__fpurge(stdin);
		printf("%s\n",b);
		printf("%s\n",a);
		printf("%p\n",a);
		printf("%p\n",b);
}
