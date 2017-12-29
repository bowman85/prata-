#include <iostream>


#include "move.h"

using namespace std ;

int main(void)
{

	Move m1 (555 , 333) ;
	Move m2 ;
	Move m3 (123000 , 99000) ;
	
	cout <<"m1:" << endl;
	m1.showmove();
	
	cout <<"m2:" << endl;
	m2.showmove();

	cout <<"m3:" << endl;
	m3.showmove();

	m2 = m1.add(m3) ;
	cout <<"new m2:  (m1+m3)" << endl;
	m2.showmove();
	
	
return 0 ;
}