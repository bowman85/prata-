#include <iostream>



#include "person.h"



int main(void)
{

using namespace std ;



	Person	obj01 ;
	Person  obj02 ("Smthecraft");
	
	Person  obj03 ( "Dimwiddy", "Sam" ) ;
	
	cout << "obj01:" << endl ;
	obj01.Show() ;
	cout << endl ;
	obj01.FormalShow();
	cout << endl ;
	
	cout << "obj02:" << endl ;
	obj02.Show() ;
	cout << endl ;
	obj02.FormalShow();
	cout << endl ;

	cout << "obj03:" << endl ;
	obj03.Show() ;
	cout << endl ;
	obj03.FormalShow();
	cout << endl ;
	
	
	
	
	

cout << "Good bye\n" ;

return 0 ;
}


