#include <iostream>

#define SIZE	4 
#include "sales.h"


int main(void)
{
	using namespace std ;
	
	double ar[SIZE] ;
	
	for ( int i = 0 ;i < SIZE ; i++){
		cout << "Put val: \n" ;
		cin >> ar[i] ;
	}
	
	
	Sales s01 ( ar, SIZE ) ;
	s01.showSale() ;


	Sales s02 ;
	setSales( s02, ar, SIZE ) ;
	s02.showSale() ;	

	
	cout << "Good bye! \n" ;
return 0;
}