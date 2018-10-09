

main(){

	int a = 1; 

	int b = 13 ;

	int s = a + b ;

	int c = a - b;

	int k = (c>>31) & 1;

	int max = a - k * c ;

	printf("%d\n",max);
	
	printf("%d\n",s - max);
}
