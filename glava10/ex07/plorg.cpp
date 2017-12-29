#include <iostream>

#include "plorg.h"


Plorg::Plorg ( const char *name , int index )
{
	int i ;
	for ( i = 0 ; name[i] != '\0' ;i ++ ) 
	{
		name_[i] = name[i] ;		
	}
	name_[i] = '\0' ;
	
	index_ = index ;

}


void Plorg::change_index (int val)
{
	index_ = val ;
	
}

void Plorg::show ()
{
	using namespace std ;
	
	cout << "name_ = " << name_  << endl ;
	cout << "index_= " << index_ << endl ;	

}