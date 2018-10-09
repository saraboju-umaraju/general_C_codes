#include	<stdio.h>


typedef struct employee emp;
typedef struct dob doob;
struct dob
{
unsigned short int date;
unsigned short int month;
unsigned short int year;
};

struct employee
{
char name[123];
int age;
float salary;
doob date;

};
emp* ask_det(emp*);
void prnt_det(emp*);
void uma(void);

int main()
{
emp *uma=(emp*)malloc(sizeof(emp));
emp *kan=(emp*)malloc(sizeof(emp));
kan=ask_det(uma);
prnt_det(kan);
on_exit(uma);
return 0;
}

emp* ask_det(emp** uma)
{
uma->name="kanna";
}

void prnt_det()
{
printf("%s\n",kan->name);
}

void uma()
{
printf("gooood bye\n");
}





