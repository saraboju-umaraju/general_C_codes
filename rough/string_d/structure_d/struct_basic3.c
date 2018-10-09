struct a{
		int b;
};

main()
{

		struct a *ptr;
		int d,e;


		ptr=fun ();
		sleep(3);
		printf("%d\n",ptr->b);
		printf("%d\n",ptr->b);
		printf("%d\n",ptr->b);
}
int fun() {
		struct a h;

		h.b = 20;

		return &h;
}
