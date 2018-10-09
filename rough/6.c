

#include<stdio.h>

int main(void)

{

int num = 10, count = 0;

while (num) {

num &= (num - 1);

count++;

}

printf("count = %d\n", count);

return 0;

} 
