#include <stdio.h>
#include <stdlib.h>

struct employee {
   char  fname[20],lname[20];
   int   emp_id;
   float age;
};

void main ()
{
   FILE *infile;
   struct employee uma;

   infile = fopen ("accounts.dat","r");
   if (infile == NULL)
     {
      fprintf(stderr, "\nError opening accounts.dat\n\n");
      exit (1);
     }
	//printf("%d",sizeof(struct employee));
   fread (&uma, 48, 2, infile);
  //    printf ("Name = %s %s   id = %d   age = %f\n",uma.fname, uma.lname, uma.emp_id, uma.age);
}
