#include <iostream>

#include "plorg.h"


int main(void)
{
	using namespace std ;
	
	Plorg p1 ;
	Plorg p2 ("New_Fucking_name" , 644);
	Plorg p3 ("Barbariska", 777 ) ;
	
	cout << "p1:\n"; 
	p1.show();
	
	cout << "p2:\n"; 
	p2.show();
	
	cout << "p3:\n"; 
	p3.show();
	
	p1.change_index(444) ;
	cout << "New index in p1:\n"; 
	p1.show();
	
	
	
	

return 0; 
}