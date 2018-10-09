#define a(x) #x
#define b(y,z) y##z
int main()


{
		/* i want to print killwill in the 2nd printf\
		   tell me is it possible
		   if possible explain\
		   if not reason 
		   */
		printf(a(uma));
		printf(b  (a("kill"),a("will")));
}
