#include <iostream>
#include <array>
#include <stdio.h>

int main(void)
{
	using namespace std ;
	
	array <float, 3> result ;
	
	cout << "Put 3 results of zabeg: " << endl ;
	cout << "1 - " ;
	cin >> result[0] ;
	
	cout << "2 - " ;
	cin >> result[1] ;
	
	cout << "3 - " ;
	cin >> result[2] ;
	
	float srednee ;
	float symma = 0;
	for (int i = 0 ; i <3 ; i++){
		symma += result[i] ;
	}
	
	srednee = symma/3.0 ;
	
	cout <<"Srednee = " << srednee << endl ;
	
	
	printf("Good bye!\n");
	return 0;
}