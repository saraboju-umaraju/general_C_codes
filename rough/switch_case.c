#include<stdio.h>
int main()
{
        int i=3;
        int j=1;
        switch(i) {
                case 1:
                        printf("\ncase 1\n");
                case 2:
                        for(j=0;j<3;j++) {
                                printf("\ncase 2\n");
                                case 3:
                                printf("\n%d\n",j);
                        }
                case 4:
                        printf("\ncase 4\n");
        }
}
