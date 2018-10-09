#include"header.h"

extern int gv;      //global variable for int validation

int main(void)
{
    int choice;   //variable to get choice from user
    char c = 'y';        // loop variable

    do{

    printf("*******MENU********\n");
    printf("1) Bubble Sort\n"
           "2) Insertion Sort\n"
           "3) Selection Sort\n"
           "4) Quick Sort\n"
           "5) Merge Sort\n");

    printf("Enter which sorting technique yo want : \n");
    choice = intval_input();

    if(gv == -1 && choice == -1){
        printf("Invalid input");
        return 0;
    }

//    printf("choice is : %d\n",choice);
   

        switch(choice){
    

            case 1 :  bubble_sort();      //calling a function to perform sorting using bubble sort
                      break;


            case 2 :  insertion_sort();   //calling a function to perform sorting using insertion sort
                      break;

   

            case 3 :  selection_sort();   // calling a function to perform sorting using selection sort
                      break;

    

            case 4 :  quick_sort();       // calling a function to perform sorting using quick sort
                      break;


            case 5 :
                      merge_sort();
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
       
