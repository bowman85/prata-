#include <iostream>

#include "list.h"

using namespace std ;

void List::change (int position , Item newVal)
{
	if ( top < position ){
		cout << "Error! This position does not exist, yet." << endl ;	
		return ;
	}
	
	mass[position] = newVal ;	
	
}

void List::add ( Item val) 
{
	if ( !isfull()){
		mass[top++] = val ;
	}
	else{
		cout <<"Error! List is full" << endl ;		
	}
}

bool List::isfull()
{
	return top==MAX ;	
}

bool List::isempty ()
{
	return top == 0 ;
}


void List::show()
{
	cout << "top = " << top << endl ;
	for (int i = 0 ; i < top ; i++){
		cout << i << " ) List[" << i << "] = " << mass[i]  << endl ;
	}
}






