#include    <uma.h>

struct Head 
{
		struct Head *next;
		struct Head *prev;
};
typedef struct Head head;

struct Node
{
	int a;
	char b;
	int c;
	head hdr;
	char ch;
	int ff;
	int d;
};
typedef struct Node node;


int main (void) {
		
		node *var=NULL,dabba;

	//printf("%x\n",&dabba.a);

		int variable=0;

//		printf("size is %zu\n",(node*)0+1);

		variable=&var->hdr;

//		var=&dabba;

//		printf("%x\n",&var+2);

		printf("%x\n",&dabba.a);

		printf("%x\n",(int)&dabba.hdr-12);
//		printf("%x\n",&dabba.hdr.prev);


		printf("%d\n",variable);

//		printf("%x\n",&var->hdr);

//		printf("%08x\n%08x\n",(unsigned)&var->hdr - variable        ,(unsigned)&var->a);




}


