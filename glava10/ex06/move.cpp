#include <iostream>

#include "move.h"

using namespace std ;

Move::Move (double a , double b )
{
	x = a ;
	y = b ;	
}

void Move::showmove()	const
{
	cout <<"x = " << x  << endl ;
	cout <<"y = " << y  << endl ;
	
}

Move Move::add (const Move & m ) const 
{
	Move ttt ;
	ttt.x = x + m.x ;
	ttt.y = y + m.y ;
	
	return ttt ;	
}


void Move::reset (double a , double b )
{
	x = a;
	y = b;
	
}