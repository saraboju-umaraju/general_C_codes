#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
   char  fname[20],lname[20];
   int   emp_id;
   float age;
};

void main ()
{
   FILE *outfile;
   struct employee uma;

   outfile = fopen ("accounts.dat","w");
   if (outfile == NULL)
     {
      fprintf(stderr, "\nError opening accounts.dat\n\n");
      exit (1);
     }

   printf("Enter \"stop\" for First Name to end program.");

   while (1)
     {
      printf("\nFirst Name: ");
      scanf ("%s", uma.fname);
      if (strcmp(uma.fname, "stop") == 0)
         exit(1);
      printf("Last Name : ");
      scanf ("%s", uma.lname);
      printf("emp Num  : ");
      scanf ("%d", &uma.emp_id);
      printf("age in float   : ");
      scanf ("%f", &uma.age);
fwrite (&uma, sizeof(struct employee), 1, outfile);
     }
}
