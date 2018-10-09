#include <stdio.h>



void main()

{

        int count = 0, i, times = 0, t, h, e, space;

        char string[100];



        puts("Enter a string:");

        scanf("%[^\n]",string);

        /*   Traverse the string to count the number of characters */

        while (string[count] != '\0')

        {

                count++;

        }
                printf("%d\n",count);

        /*   Finding the frequency of the word 'the' */

        for (i = 0; i <= count - 3; i++)

        {

                t =(string[i] == 'r' || string[i] == 'R');

                h =(string[i + 1] == 'a' || string[i + 1] == 'A');

                e =(string[i + 2] == 'j'|| string[i + 2] == 'J');

                space =(string[i + 3] == ' ' || string[i + 3] == ' ');

                if ((t && h && e && space) == 1)

                        times++;

        }

        printf("Frequency of the word 'the' is %d\n", times);

}
