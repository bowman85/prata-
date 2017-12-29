#include <iostream>
#include "cstdio"

#include "bank_ac.h"


int main(void)
{

	cout << "Программа для расширения знаний о возможностях класса " << endl ;
	cout << "Bank accounts " << endl ;
	
	
	Bank_account ac01 ; 
	
	char name[SIZE] = "Fedor Dybko";
	string bill = "44442444" ;
	double bal = 500000.0;
	//Bank_account ac02 ( name , "1234567890" , 563000)  ; 
	
	
	//Bank_account ac02 ( name )  ; 
	//Bank_account ac02 ( name, bill )  ; 
	//Bank_account ac02 ( name, bill, bal  )  ; 
	
	
	//Bank_account ac02 ( "Laiza Minelly") ;// , "9999999", 250000.12 )  ; 
	Bank_account ac02 ( "Laiza Minelly", "111111111", 250000.12 )  ; 

	
	
	ac01.showName();
	ac01.showBill();
	ac01.showBalance();
	
	cout << "\n" ;

	ac02.showName();
	ac02.showBill();
	ac02.showBalance();


	
	cout <<"Good bye\n" ;

return 0 ;
}

