main(){
		int (*p)[4];
	int		a[]={1,2,3,4,5,6,7,8,9};
				p=a;
		printf("%p\n",*(*(p+0)+3));
printf("%p\n",(p+1)[1]);
printf("%p\n",&p[2][0]);
}

