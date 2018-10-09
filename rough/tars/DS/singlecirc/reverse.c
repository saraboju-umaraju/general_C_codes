#include	"head.h"

node *reverse ( node* head ) 
{
	node *p1 , *p2 , *p3 ;

	p1 = head ;

	p2 = p1 -> ptr ;
	
	p3 = p2 -> ptr ;

	p1 -> ptr = NULL ;

	while ( p3 -> ptr ) {

		p2 -> ptr = p1 ;

		p1 = p2 ;
	
		p2 = p3 ;

		p3 = p3 -> ptr ;
	
}

	p3 -> ptr = p2 ;

	return p2 ;

}
