#include"header.h"

extern int gv;      //global variable for int validation
TREE *root = NULL;

int main(void)
{
    int choice;   //variable to get choice from user


    int choice1;

    int data;

    int set = 0;

    while(1){

        printf("*********MENU*********\n"
                "1. Insert\n"
                "2. Delete\n"
                "3. Display\n"
                "4. Exit\n");

        printf("which operation you want to perform:\n");
        choice = intval_input();

        if(gv == -1 && choice == -1){
            printf("Invalid input\n");
            break;
        }



        switch(choice){

            case 1 :

                printf("Enter data :\n");
                data = intval_input();

                if(gv == -1 && data == -1){
                    printf("Invalid data\n");
                    break;
                }
                root =  insert(data,root);      //calling a function to insert data in tree
                break;

            case 2 :
                    
                    printf("Enter data for deletion:\n");

                    data = intval_input();

                    if(gv == -1 && data == -1){
                        printf("Invalid input\n");
                        break;
                    }

                    root = delete_data(data,root);            // delete the data from tree
                    break;

            case 3 :

                      if((choice == 3) && (root == NULL)){
                          printf("Tree is empty ....cant display.\n");
                          break;
                      }


                while(1){

                    printf("\n**********MENU**********\n"
                            "1.  Preorder\n"
                            "2.  Inorder\n"
                            "3.  postorder\n"
                            "4.  Exit\n");


                    printf("Which operation you want to perform for display:\n");

                    choice1 = intval_input();

                    if(gv == -1 && choice1 == -1){
                        printf("Invalid input\n");
                        break;
                    }

                    switch(choice1){


                        case 1 :
                            preorder(root);         //function to display tree in preorder 
                            break;

                        case 2 :
                                inorder(root);      //function to display tree in inorder
                                break;

                        case 3 :

                                postorder(root);    //function to display tree in postorer
                                break;

                        case 4 :
                                set = 1;            // exit the display option
                                break;

                        default :
                                printf("Invalid choice\n");     
                                break;

                       }
                    

                    if(set == 1){
                        break;
                    }

                }

                    set = 0;

                    break;

            case 4 :
                exit(0);
                break;

            default :
                printf("Invalid choice\n");
                break;

        }
    }

    return 0;
}

