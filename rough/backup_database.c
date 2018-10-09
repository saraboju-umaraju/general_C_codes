# include	<stdio.h>
# include	<stdlib.h>
struct student
{
		char name[123];
		int age;
		char phno[123];
};
typedef struct student stud;


void  update(stud,int);
void show(stud,int);
void rem_det(stud,int);

int main(void)
{
		int ch;     
		int n;     
		int i;                                                                 
		printf("how many employees are there in  your comapny\n");                           
		scanf("%d",&n);                                                                      
		stud *employee[n];       
		employee=malloc(199);                                        
		for(i=0;i<n;i++){                                                                 
				while(1)                                                                          
				{                                                                                 
						printf("\twelcome newbee!\n\t***MENU***\n[[i].update details\n2.show details\n3.remove details\n99.exit\n");

						__fpurge(stdin);

						scanf("%d",&ch);                                                                  

						switch(ch)                                                                    
						{                                                                             
								case 1:                                                                   
										update(employee,i);                                  
									//	break;                                                            
								case 2:                                                                   
										show(employee,i);                                               
										break;                                                        
								case 3:                                                                   
									rem_det(employee,i);                                                 
										break;                                                            
								case 99:                                                                   
										exit(0);                                                          
								default:                                                                  
										printf("you have entered a wrong choice\n");                          
						}   
				}
		}

}
				stud* update(stud employee,int i)
				{
						employee=malloc(234);
						printf("enter age\n");
						scanf("%d",&employee[i].age);
						__fpurge(stdin);
						printf("enter name\n");
						scanf("%s",employee[i].name);
						printf("enter phone number");
						__fpurge(stdin);
						scanf("%s",employee[i].phno);
						return employee;

				}

				void show(stud employee,int i)
				{
						printf("name %s\n",employee[i].name);
						printf("age %d\n",employee[i].age);
						printf("number is %s\n",employee[i].phno);
				}



				void rem_det(stud employee,int i)
				{
						//employee[i].name="";
						employee[i].age=0;
						//employee[i].phno="";
				}
