#include    <uma.h>
#include    <alloca.h>
int main (void) {

		foo(66000,66000);

		getchar();

}




int foo( int nDataSize, int iterations ) 
{
		for ( int i = 0; i < iterations ; ++i )
		{
				char *bytes = alloca( nDataSize );
				// the memory above IS NOT FREED when we pass the brace below!
		} 
		return 0;
}  //
