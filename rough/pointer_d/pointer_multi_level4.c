int main()
{
		int i,arr[5]={10,20,30,40,50}, *p;
		p=&arr[0];
		for(i=0;i<8;i++)
			printf("%d	\n",++*p);
		printf("\n");
		for(i=0;i<7;i++)
				printf("%d	\n",(*p)++);
}
