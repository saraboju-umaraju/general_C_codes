#include <stdio.h>
#include <string.h>

struct Book
{
 char name[20];
 int price;
};

int main()
{
 struct Book b;
 struct Book* ptr = &b;
 uu(ptr);
}

struct Book* uu(struct Book *ptr )  { 
 strcpy(ptr->name,"umaraz");    
 ptr->price = 500;
	return ptr;
} 
