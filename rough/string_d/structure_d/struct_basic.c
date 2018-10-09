# include	<stdio.h>
struct student
{
char name[120];
int age;
float sal;
};
typedef struct student stud;

stud  uma(stud);
void print(stud);

int main(void)
{
	stud uma1,kar;
	uma1=uma(uma1);
	print(uma1);

	return 0;
}

stud uma(stud uma1)
{
	scanf("%d",&uma1.age);
	scanf("%s",uma1.name);
	scanf("%f",&uma1.sal);
	return uma1;

}

void print(stud uma1)
{
printf("name %s\n",uma1.name);
printf("name %d\n",uma1.age);
printf("name %f\n",uma1.sal);
}
