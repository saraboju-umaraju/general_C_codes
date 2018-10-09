#include	<uma.h>
#define _SIZE 5
node* insert ( node* , int );
int main()
{
		int ch = 0;
		int num=0;
		char buf[5];
		node *head;
		while(1) {
				printf("enter a choice\n");
				__fpurge(stdin);
				if(!(fgets(buf,_SIZE,stdin))){
						printf("TRY AGAIN\n");
						continue;
				}
				ch = intval(buf);
				if( ch == EOF )
						continue;
				switch(ch) {
						case 1:
								while(1) {
								printf("enter a element to insert\n");
								__fpurge(stdin);
								if((fgets(buf,_SIZE,stdin)==NULL)) { 
								continue;		
								}
								if(( num = intval(buf))==EOF)
										continue;

						    	head =	insert (head, num);
								break;
								}
								break;

				
						case 2:
								disp( head );
								break;
		}
		}




