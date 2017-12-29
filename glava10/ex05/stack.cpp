#include <iostream>

#include <cstdio>

#include "stack.h"

using namespace std ;

Stack::Stack()
{
	total = 0 ;
	top   = 0 ;	
}

bool Stack::isempty()	const
{
	if (top == 0 ){
		cout <<"Error! Stack is already empty!\n" ;
	}
	return 	top == 0 ;	
}

bool Stack::isfull()	const
{
	if (top == MAX){
		cout <<"Error!  Stack is full\n" ;
	}
	return top == MAX ;	
}


bool Stack::push (const Item & item)
{
	if ( isfull() ){
		cout <<"Error!  Stack is full\n" ;
		return false ;
	}
	else{
		items[top++] = item ;
		return true ;
	}
	
}


bool Stack::pop ( Item &item)
{
	if (isempty()){
		cout <<"Error! Stack is already empty!\n" ;
		return false ;
	}
	else{
		cout <<"top = " << top << endl ;
		total += items[top-1].payment ;
		printf("Total = %f \n" , total );
		item = items[top-1]  ;
		top--;
		return true ;
	}
}


void  Stack::show()
{
	if (top ==0 ) {
		cout << "Stack is empty" << endl ;
		printf("Whole payment: %7f\n", total ) ;
		return ;
	}
	
	printf("Whole class Stack comprises \n" );
	for (int i = 0 ; i< top ; i++){
		printf("%2d)   Name: %15s \t payment: %5.0f \n", i, items[i].fullname, items[i].payment ) ;
	}
	printf("Whole payment: %7f\n", total ) ;
	printf("----------------------------\n" );
	
}
