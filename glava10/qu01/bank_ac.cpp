#include <iostream>
#include <string>

#include <string.h>	
#include "cstdio"

using namespace std ;
#include "bank_ac.h"


Bank_account::Bank_account ()
{
	cout<< "Hello, This is Constructor\n" ; 
	cout << "Put account Name:\n" ;
	cin.getline (Name_, SIZE) ;
	
	cout << "Put account bill:\n" ;
	getline ( cin , bill_) ;
	
	cout << "Put account balance:\n" ;
	//getline ( cin , balance) ;
	cin >> balance_ ;
	
	//char ch ;
	//while ( cin::get(ch) && ch != '\n') ;
	 while( cin.get() != '\n' ){
		 cin.clear();
	 }
	
}

Bank_account::~Bank_account () 
{
	
}



Bank_account::Bank_account( char *name )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = "444444" ;
	this->balance_  = 0 ;
	
}


Bank_account::Bank_account( const char *name )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = "444444" ;
	this->balance_  = 0 ;
	
}

Bank_account::Bank_account( char *name, string & bill )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = bill ;
	this->balance_ = 0 ;
	
}

Bank_account::Bank_account( const char *name, string & bill )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = bill ;
	this->balance_ = 0 ;
	
}

Bank_account::Bank_account( char *name, const string & bill )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = bill ;
	this->balance_ = 0 ;
}

Bank_account::Bank_account( const char *name, const string & bill )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = bill ;
	this->balance_ = 0 ;
	
}





Bank_account::Bank_account( char *name, string & bill , double balance )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = bill ;
	this->balance_ = balance ;
	
}

Bank_account::Bank_account( const char *name, const string & bill , double balance )
{
	strncpy ( this->Name_, name , SIZE ) ;
	this->bill_ = bill ;
	this->balance_ = balance ;
	
}



void Bank_account::showName()
{
	cout << "Bank_account Name: " << this->Name_  << endl ;
}


void Bank_account::showBill()
{
	cout << "Bank_account Bill: " << this->bill_  << endl ;
	
}

void Bank_account::showBalance()
{
	cout << "Bank_account balance: " << this->balance_  << endl ;
}

void Bank_account::PutMoney( double money) 
{
	double current = 0;
	cout << "How much money you want to put: " ;
	cin >> current ;
	while( cin.get() != '\n' ){
		 cin.clear();
	 }
	 this->balance_ += current ;
}


int  Bank_account::TakeOffMoney ( double money) 
{
	double current ;
	cout << "How much money you want to takeoff: " ;
	cin >> current ;
	while( cin.get() != '\n' ){
		 cin.clear();
	 }
	 if ( current > balance_ ){
		 cout <<"Error!  Not enogth money on your balance" << endl ;
	 }
	 else{
		 this->balance_ -= current ;
	 }
}


