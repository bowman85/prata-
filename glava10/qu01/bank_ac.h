#ifndef  	BANK_ACCOUNT_H_
#define 	BANK_ACCOUNT_H_

#include <iostream>
#include <string>


#define	SIZE	100
enum ITOG { FAILURE , SUCCESS } ;

using namespace std ;

class Bank_account {
	
	
	private:
		char 	Name_[SIZE] ;
		string	bill_;
		double	balance_ ;
	
	public:
		Bank_account() ;
		
		Bank_account( char *name ) ;
		Bank_account( const char *name ) ;
		
		Bank_account( char *name , string &bill) ;
		Bank_account( const char *name , string &bill) ;
		
		Bank_account( char *name , const string &bill) ;
		Bank_account( const char *name , const string &bill) ;
		
		
		Bank_account( char *name, string & bill , double balance = 0.0 );
		Bank_account( const char *name, const string & bill , double balance = 0.0 );


		
		~Bank_account();
		
		void showName();
		void showBill();
		void showBalance();
		
		void PutMoney( double money) ;
		int  TakeOffMoney ( double money) ;
		
		
		

};





#endif