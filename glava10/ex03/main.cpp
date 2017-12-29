#include <iostream>

#include "golf.h"


using namespace std ;

int main(void)
{
	Golf p1 ;
	Golf p2 ("Frederico Marsales", 34)  ;
	
	p1.showgolf();
	p2.showgolf();
	
	p1.set_handicap( 55) ;
	p2.set_handicap( 675) ;

	p1.showgolf();
	p2.showgolf();


	cout <<"\nNew user with setgolf() funct...\n" ;
	Golf p3 ;
	
	setgolf( p3) ;
	
	p3.showgolf();
	
return 0;
}