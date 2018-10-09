#include<stdio.h>
#include<stdlib.h>

int main(void)
{
//  int *a[4] ;

    char *p;
	char *q;

	p = malloc(8);
	q = malloc(8);
		printf ("\n p : %d\n", *(p - 4));
		printf ("\n q : %d\n", *(q - 4));


int i;
//	for(i = 0; i < 12; i++) {
//		*(p + i) = i + 1;
//	}
//	for(i = 0; i < 10; i++) {
//		*(q + i) = i + 1;
//	}
//	free(q);
//	free(p);
//	char *r;
//	r = malloc(20);

//	r = realloc(p,15);
//	r = malloc(8);

	//for(i = 0; i < 10; i++) {
	//	r[i] = i + 2;
//	}
	for(i = -4; i < 50; i++) {
		printf(" *p[%d] : %d\n", i, p[i]);
	}
	for(i = -4; i < 50; i++) {
		printf(" *q[%d] : %d\n", i, q[i]);
	}
	for(i = -4; i < 50; i++) {
		printf(" *r[%d] : %d\n", i, r[i]);
	}
//    printf("\n Sizeof: \n %d %d \n %d %d \n %d %d \n", sizeof(**a), sizeof(*a), sizeof(*(a+1)), sizeof(*(a+2)), sizeof(*(a+3)), sizeof(a) );

}

