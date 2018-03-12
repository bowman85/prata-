#include <iostream>
#include "dma.h"

int main()
{
	using std::cout ;
	using std::endl ;
	
	baseDMA shirt ("Posrtabelly", 8) ;
	lackDMA balloon ("red" , "Blimpo" , 4 ) ;
	hasDMA  map ("Mercator", "Buffalo Keys", 5 ) ;
	
	cout << "Displaying baseDMA object:\n" ; 
	cout << shirt ;
	cout << endl ;
	
	cout << "Displaying lackDMA object:\n" ;
	cout << balloon ;
	cout << endl ;
	
	cout << "Displaying hasDMA object:\n" ;
	cout << map ;
	cout << endl ;
		
	lackDMA balloon2 (balloon) ;
	cout << "Result of lackDMA copy:\n" ;
	cout << balloon2 ;
	cout << endl ;
	
	hasDMA map2 ;
	map2 = map ;
	
	cout << "Result of hasDMA assignment:\n" ;
	cout <<map2 << endl ;
	cout << endl ;
	
	return 0 ;
}