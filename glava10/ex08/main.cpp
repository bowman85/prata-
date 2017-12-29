#include <iostream>

#include <cstdlib>

#include "list.h"



int main(void)
{
	using namespace std ;
	
	List l1 ;

	cout <<"Creating 7 values...\n"  ; 
	for (int i = 0 ; i < 7 ; i++)
	{
		l1.add(rand() ) ;
	}
	
	l1.show() ;
	
	cout << "Changing 5 value" << endl  ;
	l1.change (5, 777) ;
	l1.show() ;


	cout << "Changing 8 value" << endl ;
	l1.change(8, 999) ;
	l1.show() ;


	
	cout << endl << "Creating new 5 values...\n"  ; 
	for (int i = 0 ; i < 5 ; i++)
	{
		l1.add(rand() ) ;
	}
	l1.show() ;

cout << "Good bye!" << endl ;
	
return 0;
}