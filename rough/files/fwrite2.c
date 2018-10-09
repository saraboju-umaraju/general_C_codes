#include<stdio.h>

int main ()
{
   FILE *fp;
   char str[] = "This 90is tutorialspoint.com";

   fp = fopen( "file.txt" , "w" );
   fwrite(str , sizeof(str) , 1 , fp );

   fclose(fp);
  
   return(0);
}
