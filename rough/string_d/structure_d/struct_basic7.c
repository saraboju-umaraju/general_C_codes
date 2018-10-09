#include	<stdio.h>
struct student
{
int id;
int id1;
char sex;
char name[10];
float salary;
};
int main()
{
struct student stud ={1,2,'n',"umaraju",123.123};
printf("%p\n",&stud.id);
printf("%p\n",&stud.id1);
printf("%p\n",&stud.sex);
printf("%p\n",&stud.name);
printf("%p\n",&stud.salary);
}
