#include	 "head.h"
#include	<_val.h>
#define FGETS __fpurge(stdin);fgets(buf,SIZE,stdin);
#define SIZE 10
bst *root=NULL;
bst* insert(bst*,int);
bst* in_order( bst* );
bst* post_order( bst* );
bst* pre_order( bst* );
bst* max( bst* );
bst* min( bst* );
int sum_all(bst*);
int least_2(bst*);
int main(void){
		int num;
		int pos;
		int ch;
		char buf[SIZE];
		bst* temp=NULL;
		bst* maxy;
		bst* mini;
		while(1){
				printf("1.INSERT\n2.SHOW\n3.MAX VALUE\n4.MIN VALUE\n5.SUM \n");
				scanf("%d",&ch);
				switch(ch){
						case 1:
								printf("ENTER DATA\n");
								FGETS
								num = _val(NULL);
								root = insert(root,num);
								break;
						case 3:
								maxy = max(root);
								printf("%d",maxy->data);
								break;
						case 4:
								mini = min(root);
								printf("%d",mini->data);
								break;
						case 5:
								printf("the sum is %d\n",sum_all( root ));
								break;
						case 6:
								least_2( root );
								break;

						case 2:
								while(1){

										printf("1.PRE_ORDER\n2.IN_ORDER\n3.POST_ORDER\n");
										__fpurge(stdin);
										fgets(buf,SIZE,stdin);
										pos=_val(buf);
										switch(pos){

												case 1:	
														pre_order(root);
														break;
												case 2:
														in_order(root);
														break;
												case 3:
														post_order(root);
														break;
										}break;
								}break;
				}
		}
}
