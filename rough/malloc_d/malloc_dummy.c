# include <sys/types.h>
# include <unistd.h>
int *_malloc (size_t );
int
main ( void ) {
		_malloc ( 12 ) ;
		_malloc ( 12 ) ;
		_malloc ( 12 ) ;
		_malloc ( 12 ) ;

}
int
* _malloc ( size_t size)
{
		void *p;
		p = sbrk (0);
		/* If sbrk fails , we return NULL */
		if ( sbrk (size) == (void *) -1)
				return NULL;
		return p;
}
