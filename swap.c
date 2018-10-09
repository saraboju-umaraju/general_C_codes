int main(void)
{
	int a=10, b=20;

//	scanf("%d%d", &a, &b);

	a = a * b / ( b = a );

	printf("a = %d b = %d\n", a, b);
}
