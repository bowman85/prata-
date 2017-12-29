#include <iostream>

#include "cow.h"
	
using namespace std;

int main()
{
	
	
	
	Cow c1  ;
	Cow c2 ("c2", "travelling", 128 ) ;
	Cow c3 ("cow c3" , "eating eagles", 286) ;
	Cow c4 ("cow c4" , "doing nothing" , 140 ) ;
	
	Cow c5 (c3) ;
	
	c1.ShowCow() ;
	c2.ShowCow() ;
	c3.ShowCow() ;
	c4.ShowCow() ;
	
	cout <<"\nc5 (c3) :" << endl ;
	c5.ShowCow() ;
	 
	cout <<"\nc5 = c4 :" << endl ;
	c5 = c4 ;
	c5.ShowCow() ; 
	 
	 

cout << "Good bye!\n" ;
return 0 ;
}


