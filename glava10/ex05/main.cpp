#include <iostream>

#include <cstdio>

#include "stack.h"

using namespace std ;

void print_menu(void)
{
	cout << endl ;
	cout << "------ MENU ------" << endl ;
	cout << "W or w	- put new customer" << endl ;
	cout << "E or e - delete last customer from pape" << endl ;
	cout << "S or s - show all info" << endl ;
	cout << "Q or q - quit from program" << endl ;
	cout << endl ;
	
}


int main(void)
{
	Stack st ;
	char ch ;
	Item  element ;
	
	cout << "Hello, lets start to modify stack\n" ;
	
	do {
		print_menu () ;
		cin >> ch ;
		while ( cin.get() != '\n'){
			continue ;
		}
		
		switch (ch){
			case 'W':
			case 'w':
				if (!st.isfull()){
					cout <<"Enter fullname:\n" ;
					cin.getline(element.fullname, SIZE) ;
					cout <<"Enter payment:\n"  ;
					cin >> element.payment ;
					st.push( element );
				}
				break;
			case 'E':
			case 'e':
				if (!st.isempty()){
					cout << "Deleting last customer...\n" ;
					st.pop(element) ;
					cout << "That was customer: Name- " << element.fullname << " \t payment- " << element.payment ;
					cout << endl ;
				}
				break;
				
			case 'S':
			case 's':
				st.show();
				break;
			case 'Q':
			case 'q':
				cout <<"Quit from programm..." << endl ;
			
		}
		
		
		
	} while ( toupper(ch) != 'Q' ) ;
	

	cout << "Good bye!" << endl ;
return 0;
}