#include <stdio.h>
 
#define FIELDS int i1;  char c1; int i2; char c2;
 
typedef struct {
    FIELDS
} __attribute__((__packed__)) unaligned_struct;
 
typedef struct {
    FIELDS
} aligned_struct;
 
int
main() {
    printf("aligned %d unaligned %d\n", (int)sizeof(aligned_struct),
           (int)sizeof(unaligned_struct));
    return 0;
}
