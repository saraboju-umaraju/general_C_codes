#include    <uma.h>
int main (void) {
		int *p = malloc (1);
		int *q = malloc (1);
		int c = 1 ;
		printf("adress is %p\n",p);
		printf("adress is %p\n",q);
		printf("p usable %d\n",malloc_usable_size(p));
		printf("q usable %d\n",malloc_usable_size(q));
//		free(p+4);
//		*p = malloc ( 12 );
		//}
				//* ( p -2 ) = 12;
			//	* ( p ) = 17;
			//	* ( p+6 ) = 17;
			//	* ( p +7) = 17;
			//	* ( p +8) = 17;

				printf("%d %p\n",*(p-2),p-2);
				printf("%d %p\n",*(p-1),p-1);
				printf("%d %p\n",*(p),p);
				printf("%d %p\n",*(p+1),p+1);
				printf("%d %p\n",*(p+2),p+2);
				printf("--meta data for q %d %p\n",*(p+3),p+3);
				printf("%d %p\n",*(p+4),p+4);
				printf("-%d %p\n",*(p+5),p+5);
				printf("%d %p\n",*(p+6),p+6);
				printf("-----remained meta data %d %p\n",*(p+7),p+7);
				printf("%d %p\n",*(p+8),p+8);
				printf("%d %p\n",*(p+9),p+9);
				printf("%d %p\n",*(p+10),p+11);
				//for ( c = 8; c < 99000 ; c ++ ) {
				//printf("%d %p\n",*(p+c),p+c);
				//}*/
				//printf("%d %p\n",*(p+9),p+9);
	//		free(q);
			/*	printf("--------------\n");
				printf("%d %p\n",*(p-2),p-2);
				printf("%d %p\n",*(p-1),p-1);
				printf("%d %p\n",*(p),p);
				printf("%d %p\n",*(p+1),p+1);
				printf("%d %p\n",*(p+2),p+2);
				printf("%d %p\n",*(p+3),p+3);
				printf("%d %p\n",*(p+4),p+4);
				printf("----%d %p\n",*(p+5),p+5);
				printf("%d %p\n",*(p+6),p+6);
				printf("%d %p\n",*(p+7),p+7);
				printf("%d %p\n",*(p+8),p+8);
				printf("%d %p\n",*(p+9),p+9);
				printf("%d %p\n",*(p+10),p+11); */
//}
}
