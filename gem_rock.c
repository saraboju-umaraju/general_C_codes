

/*propreitary of umaraZ Inc written for GLOBALEDGESOFT p LTD */

#include	<stdio.h>

int main ( void ) 
{

	int num = 0 ;

	scanf ("%d",&num);

	num+=1 ;

	int x = 0 ;
	
	int y = 0 ;

	int count = 0 ;

	char **p = NULL ;
	
	char **q = NULL ;

	p = (char**) malloc ( 4 * num ) ;

	while ( x < num ) {

			p[x] = (char*)malloc ( 100 ) ;

			x++;
	}

	x = 0 ;

	while ( x < num-1 ) {
	
			scanf ("%s", p[x] ) ;

			x++ ;

		}

	x = 0;

	q = (char**) malloc ( 4 * num ) ;

    while ( x < num ) {

            q[x] = (char*)malloc ( 26 ) ;

            x++;
    }
	
	x = 0 ;
	
	while ( x < num ) {

			y = 0 ;

			while ( y < strlen ( p[x] ) ) {

					 q[x][ p[x][y] - 65] = 1 ;

						y++ ;

				}

				x++ ;

		}

		x = 1 ;

		memset ( q[0] , 1 , 26 ) ;

		 while ( x < num ) {

            y = 0 ;

            while ( y < 26 ) {

//                     printf ( "%d" , q[x][y] ) ; 

						q[0][y] &=  q[x][y]  ;

                        y++ ;

                }

				puts("");

                x++ ;

        }

		y = 0 ;
		
		 while ( y < 26 ) {

         //            printf ( "%d" , q[x][y] ) ; 

                        if  (  q[0][y]  ) count++ ;

                        y++ ;

                }

printf("%d\n" , count );

}
	
