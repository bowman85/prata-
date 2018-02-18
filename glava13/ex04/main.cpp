#include <iostream>
#include "vintage_port.h"

using namespace std ;


int  main ( void)
{


	cout <<"Hello! Let's start\n" ;
	
	Port p1("Branco", "White fruit" , 2) ;
	Port p2("Colheita", "tawny" , 3) ;
	
	cout <<"Print Port p1 " << endl ;
	cout << p1 << endl << endl ;
	
	cout <<"Show() Port p1 " << endl ;
	p1.Show() ;
	
	cout << endl;
	
	VintagePort vp1 ( "Vintage_Super_1", 2 , "Nickname_John", 1903) ;
	VintagePort vp2 ( "Vintage_Super_8", 13 , "Nickname_Bells", 716) ;
	
	cout << "Print Vintage vp1" << endl ;
	cout << vp1 ;
	
	cout <<"Show() Port vp1 " << endl ;
	vp1.Show() ;
	
	

	

	cout << endl << "Good bye!" << endl ;
return 0 ;
}