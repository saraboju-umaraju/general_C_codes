 #include<stdio.h>
#define var 3
void main(){
            char *cricket[var+~0]={"clarke","asdf"};
                char *ptr=cricket[1+~0];
                    printf("%c",*ptr++); 
                    printf("%d\n",~0);
}
