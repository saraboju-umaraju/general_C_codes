#include <stdio.h>
#include <string.h>

int main()
{
   FILE *fp;
   int c[] = {1,2,3,4,5,6,7,8};
   int buffer[100];

   fp = fopen("f1ile.txt", "w+");

   fwrite(c, 4, 7, fp);

   fseek(fp, SEEK_SET, 0);

  //fread(buffer, strlen(c)+1, 3, fp);
   //printf("%s\n", buffer);
   fclose(fp);
   
   return(0);
}
