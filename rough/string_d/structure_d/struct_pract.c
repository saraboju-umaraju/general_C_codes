#if 0
/*
 * struct declaration
 */
#include<stdio.h>
struct student{
    int roll;
    float marks;
}s1 = { ,6};

int main(void)
{
struct student{

    int roll;
    float marks;
};
    struct student s2 = { .marks =6};
    s1.marks = 76;
 //  s2.roll = 6;
   // s2.marks = 67;
    printf("s1.roll = %d,s1.marks = %f\n",s1.roll,s1.marks);
    printf("s2.roll = %d,s2.marks = %f\n",s2.roll,s2.marks);
    return 0;
}
#endif

#if 0
/*
 * types of strcture declaration
 */
#include<stdio.h>
struct {
    int n1;
    int n2;
}s1;

struct krupa{
    int n1;
    char a;
};

typedef struct student{
    char name[20];
    int roll;
}data;
int main(void)
{

    s1.n1 = 10;
    struct krupa k1;
    k1.a = 'h';
    struct krupa s2 = {70, 'a'};
    data s3 = {"rachana",35};
    printf("s1.n1 = %d,k1.a = %c,s3.name = %s\n",s1.n1,k1.a,s3.name);
    return 0;
}
#endif

#if 0
/*
 * structure memmory allocation
 */

#include<stdio.h>

typedef struct student{
    char k;
//    char jj;
  short int b;
  double o;
 short int  c;
 short int  d;
    //int roll;
    char l;
    //char h;
    //float marks;
    //char s[20];
}record;

int main(void)
{
    printf("size of structure : %d\n",sizeof(record));
    return 0;
}
#endif

#if 0
/*
 * pragma pack
 */

//#pragma pack(push,2)
#include<stdio.h>
typedef struct student{
    int a;
    char b;
} __attribute__((packed)) st;
//#pragma pack(pop)
typedef struct  __attribute__((packed,alligned(2))) student1{
        int a;
        char b;
}st1;


int main(void)
{
    st s1;
    st1 s2;
    printf("size is %d\n" ,sizeof(s1));
    printf("size is %d\n" ,sizeof(s2));
    return 0;
}
#endif

#if 1
/*
 * bitfiels
 */
#include<stdio.h>
//#pragma pack(4)
struct st{
    
    char b : 2;
    char c : 3;
    int a ;
}s1;

struct A {
        char a;
        char b;
}s2;

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
        char c;
        int a[0];
        char b;
}s4;
/*struct E {
        int a[];
        char c;
}s5;*/

typedef struct F {
        int a;
        int b[];
}s6;
/*struct G {
        extern int a;
        static int b;
        char c;
}s7;*/

struct H {
        int a;
        short int b;
         double c;
         char d;
         short int e;
}s8;
struct I{
    short int a;
    char b;
    short int c;
}s9;

struct J{
    unsigned int a;
}s10 = {-1};

struct K{
     
}s11;

struct L{

    int a;
    struct {

        int c;
        char bd;
    }er;
    char b;
}s12;

struct N{
    char a;
    struct O{
        char a;
        char b;
    };
    char b;
}s13;

struct P{
    enum tag {a,b,c,d};
    int a;
    char c;
}s14;

union p {
    int a;

    struct Q {
        char a;
        double b;
        int c;
    } ;

    char b;
}s15;

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
            }k;
}s16;
int main(void)
{
      printf("size of s1:%d\n",sizeof(s15));
  return 0;
}
#endif


