#include<stdio.h> 

int main() 

{  

int j;  

unsigned int i = 15;

j = 0; 

while (j < 16) 

printf("%d",(i << j++ & 0x8000)? 1: 0);

}
