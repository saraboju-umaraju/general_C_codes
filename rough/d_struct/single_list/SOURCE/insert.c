#include"header.h"

NODE * insertion(NODE *hptr)
{

	system("clear");

	int op;
	
	int pos;

	int num;

	do{

	printf("\n\n************ENTER YOUR CHOICE***********\n\n0.DISPLAY\n1.ADD AT BEGINING \n2.ADD AT"
			"END\n3.ADD AT POSITION\n4.ADD BEFORE POSITION\n5.ADD AFTER POSITION\n6.ADD BEFORE"
		   "VALUE\n7.ADD AFTER VALUE\n8.ADD AT MIDDLE\n9.ADD AT PENALTIMENT\n"
			"10.EXIT INSERTION MENU\n");

				op = intval();

				if(op > 2 && op < 8){

				(op > 2 && op < 6)?printf("ENTER POSITION FOR OPERATION\n"):printf("ENTER VALUE"
							  				" FOR OPERATION\n");

				pos = intval();

				}

				if(op > 0 && op < 10){

				printf("ENTER NUMBER\n");

				num = intval();

				}

	switch(op)
	{
		case 0:
				display(hptr);
				break;
		case 1:
				add_begin(num, &hptr);
				break;
				
		case 2: 
				add_end(num,&hptr);
				break;
	
		case 3:
			   add_pos(num,pos,&hptr);
			   break;

		case 4:
			   add_b4pos(num,pos,&hptr);
			   break;
		
		case 5:
			   add_afterpos(num,pos,&hptr);
			   break;
		case 6:
			   add_beforeval(num,pos,&hptr);
			   break;
		case 7:
			   add_afterval(num,pos,&hptr);
			   break;
		case 8:
			   add_middle(num,&hptr);
			   break;

		case 9:
			   add_penaltiment(num,&hptr);
			   break;
		case 10:
			   printf("-------EXITED-------\n");
			   break;

		default:
			   printf("YOU HAVE ENTERED WRONG CHOICE\n");
	}

	}while(op != 10);

	return hptr;
}
