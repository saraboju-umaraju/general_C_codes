#include"header.h"

extern int gv;      //global variable for int validation

int main(void)
{
    int choice;   //variable to get choice from user
    char c = 'y';        // loop variable

    do{

    printf("*******MENU********\n");
    printf("1) Linear Search\n"
           "2) Binary Search\n");

    printf("Enter which searching technique you want : \n");
    choice = intval_input();

    if(gv == -1 && choice == -1){
        printf("Invalid input");
        return 0;
    }

//    printf("choice is : %d\n",choice);
   

        switch(choice){
    

            case 1 :  linear_search();      //calling a function to perform searching using linear search
                      break;


            case 2 :  binary_search();   //calling a function to perform searching using binary search
                      break;

 
            default :
                      printf("Invalid choice\n");
                      break;

        }

        printf("Do you want to continue (y/n):\n");
     
        do{

             c = getchar();
             __fpurge(stdin);
        }while(c != 'n' && c != 'y');

       

    }while(c == 'y');

    return 0;
}
       
