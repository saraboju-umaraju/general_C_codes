#include"header.h"

NODE * deletion(NODE *hptr)
{

	system("clear");

	int op;
	
	int pos;

	do{

	printf("\n\n************ENTER YOUR CHOICE***********\n\n0.DISPLAY\n1.DELETE AT BEGINING \n2."
			"DELETE AT END\n3.DELETE AT POSITION\n4.DELETE BEFORE POSITION\n5.DELETE AFTER POSITION"
			"\n6.DELETE BEFORE VALUE\n7.DELETE AFTER VALUE\n8.DELETE AT MIDDLE\n9.DELETE AT"
		    "PENALTIMENT\n10.EXIT INSERTION MENU\n");

				op = intval();

				if(op > 2 && op < 8){

				(op > 2 && op < 6)?printf("ENTER POSITION FOR OPERATION\n"):printf("ENTER VALUE"
							  				" FOR OPERATION\n");

				pos = intval();

				}


	switch(op)
	{
		case 0:
				display(hptr);
				break;
		case 1:
				delete_begin(&hptr);
				break;
				
		case 2: 
				delete_end(&hptr);
				break;
	
		case 3:
			   delete_pos(pos,&hptr);
			   break;

		case 4:
			   delete_pos(pos-1,&hptr);
			   break;
		
		case 5:
			   delete_pos(pos+1,&hptr);
			   break;
		case 6:
			   delete_beforeval(pos,&hptr);
			   break;
		case 7:
			   delete_afterval(pos,&hptr);
			   break;
		case 8:
			   delete_middle(&hptr);
			   break;

		case 9:
			   delete_penaltiment(&hptr);
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
