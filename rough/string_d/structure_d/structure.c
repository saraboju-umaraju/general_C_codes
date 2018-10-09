


/*Find the size of structures given below with and without using 
 * #pragma pack and with different alignments and find out the proper reasons.
 * check all possibilities for each and every structure 
 */
#include   <stdio.h>


struct A {
    char a;
    char b;
}s1;


struct B {
    char a;
	 int b;
    short int c;
}sa2;


struct C {
    int a;
    char b;
}s3;



struct D {
    int a[10];
    char b[5];
}s4;



struct E {
    //int a[];
    char c;
}s5;




struct F {
    char a;
    int b[];
}s6;



struct G {
//    register int a;
  //  static int b;
    char c;
}s7;





struct H {
    int a;
    short int b;
    double c;
    char d;
    short int e;
}s8;


struct I {
    short int a;
    char b;
    short int c;
}s9;


struct J {
    //  There are no elements
};


struct K {
    int a;
    struct L {
        int a;
        char b;
    };
    char b;
}s10;


struct M {
    char a;
    struct N {
        char a;
        char b;
    } see;
    char b;
}s11;



struct O {
    enum tag {a,b,c,d};
    int a;
    char c;
}s12;




union p {
    int a;
    struct Q {
        char a;
        double b;
        int c;
    } observe;
    char b;
}s13;



union R {
    union S {
        int a;
        char b;
    };
    union T {
        union U {
            double c;
            double d;
        } watch1;
        struct V {
            int e;
            struct W {
                char f;
                double g;
            }watch2;
        }
    };
}s14;

int main()
{
printf("%d",sizeof(s1));
}
