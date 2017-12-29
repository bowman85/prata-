#include <iostream>
#include <cstring>
#include "cow.h"


Cow::Cow()
{
	std::cout <<"constructor1 is starting...\n" ;
	// _name = new char [SIZE] ;
	 _hobby = new char [4] ;
	 std::strcpy ( _hobby, "C++" ) ;
	 std::strcpy (_name , "noname" );
	 _weight= 0;
}



Cow::~Cow()
{
	std::cout << "destructor '" << _name <<"' is coming out...\n" ;
	//delete[] _name ;
	delete [] _hobby ;
}


Cow::Cow( const char *nm, const char *ho, double wt )
{
	std::cout <<"constructor2 is starting...\n" ;
	using std::strcpy ;
	strcpy(_name, nm ) ;
	int len = strlen(ho) ;
	_hobby = new char [len+1] ;
	strcpy (_hobby, ho) ;
	
	_weight = wt ;
}


Cow::Cow( const Cow &c) 
{
	std::cout <<"constructor3 is starting...\n" ;

	using std::strcpy ;
	strcpy ( this->_name , c._name ) ;
	int len = strlen ( c._hobby);
	//delete [] _hobby ;
	_hobby = new char [len+1] ;
	strcpy (_hobby , c._hobby ) ;
	
	_weight = c._weight  ;
}

Cow &  Cow::operator= (const Cow &c ) 
{

	if (this == &c) {
		std::cout <<"this == &c \n" ;
		return *this ;
	}
		
	using std::strcpy ;
	strcpy ( this->_name , c._name ) ;
	int len = strlen ( c._hobby);
	delete [] _hobby ;
	_hobby = new char [len+1] ;
	strcpy (_hobby , c._hobby ) ;
	
	_weight = c._weight  ;
	return *this  ;
}

void Cow::ShowCow() const 
{
	cout << endl ;
	cout << "_name  :" << _name << endl ;
	cout << "_hobby :" << _hobby<< endl ;
	cout << "_weight:" << _weight << endl ;
	cout << "======================\n" ;
}










