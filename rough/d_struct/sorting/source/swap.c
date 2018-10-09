/*
 * function to swap the element
 */
#include"header.h"

void swap_arr(int *a, int *b)
{
/*    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    
*/
//   *a ^= *b ^= *a ^= *b;
  
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
  

}

