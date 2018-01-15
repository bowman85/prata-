#include <iostream>
#include <cstring>

#include "stack.h"


Stack::Stack( int n  )
{

	cout <<"Constructor_1 in action \n" ;
	if ( n> MAX ) {
		cout <<"Stack MAX size = "<< MAX <<". Switching to this value\n" ; 
		n = MAX ;
	}
	
	size = n ;
	top = 0 ;	
		
	pitems = new Item [size] ;
}

Stack::Stack (const Stack &st )
{	
	cout <<"Constructor_2 in action \n" ;
	size = st.size ;
	top = st.top ;		
	pitems = new Item [size] ;
	
	memcpy ( pitems , st.pitems, sizeof(Item ) * size ) ;
	
}

Stack::~Stack()
{
	cout <<"Destructor in action \n" ;
	delete [] pitems ;
}


bool Stack::isempty() const 
{
	return (top == 0)  ;
}

bool Stack::isfull() const 
{
	return (top >= size ) ;
}

bool Stack::push ( const Item & item ) 
{
	if (top >= MAX){
		cout << "Error! Stack is full. Operation not permited.\n" ; 
		return false ;
	}
	pitems[top++] = item ;
	return true ;
}

bool Stack::pop ( Item & item ) 
{
	if ( top == 0 ){
		return false ;
	}
	item = pitems[--top] ;
	return true ;
	
}

Stack & Stack::operator = ( const Stack &st ) 
{
	if (this == &st ){
		return *this ;
	}
	
	delete [] pitems ;
	size = st.size ;
	top  = st.top  ;
	pitems = new Item [size] ;
	memcpy (pitems, st.pitems , sizeof (Item) * size ) ;
	
	return *this ;
}

void Stack::show () const 
{
	cout <<"pitems array consist from:\n" ;
		for (int i=0; i< top; i++){
			cout <<"\t pitem[" << i <<"]= " << pitems[i] << endl ;
		}
		
}













