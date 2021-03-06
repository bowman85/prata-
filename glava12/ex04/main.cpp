#include <iostream>

#include "stack.h"

using namespace std;

void print_menu() ;
void cicle_2level_menu  ( Stack &st); 
int  menu_sizeNewStack( ) ;

///	спрашиваем какой размер у нового эл-та стека.
///	создаем его
///	выполняем все операции с ним.
///	при вводе q двигваемся дальше
///	создаем стек и копируем его из предыдущего
///	вновь выполняем все операции с текущим стеком
///	при вводе q двигваемся дальше
///	создем стек и присваиваем значения из предыдущего
///	делаем все операции
///	при вводе q двигваемся дальше
///	выходим из программы.
///
///
///

int main()
{


	Stack st ;
	cicle_2level_menu ( st ) ;

	int size ;
	size = menu_sizeNewStack( ) ;
	
	Stack st2(size) ;
	cicle_2level_menu ( st2 ) ;

	Stack st3 ;
	st3 = st2 ;
	cicle_2level_menu ( st3 ) ;

	
cout <<"Good bye!\n" ;
return 0 ;
}


int  menu_sizeNewStack( )
{
	int stack_size  = 0 ;
	
	cout <<"Enter Stack size:\n" ;	 
	cin >> stack_size  ;
	
	return  stack_size ;
}

void cicle_2level_menu( Stack &st)
{

	char ch ;
	unsigned long po;
	
	print_menu();
	
	while (cin>> ch && toupper(ch) != 'Q' ){
		while (cin.get() != '\n' ){
			continue ;
		}
		if (!isalpha(ch)) {
			cout << '\a';
			continue ;
		}
		
		switch (ch) 
		{
			case 'A' :
			case 'a' :	cout << "Enter a PO number to add: " ;
									cin  >> po ;
									if (st.isfull() ){
										cout << "stack already full\n" ;
									}
									else{
										st.push(po);
									}
									break ;
			case 'P':
			case 'p':	if (st.isempty() ){
									cout << "stack already empty\n";
								}
								else{
									st.pop(po);
									cout << "PO #" << po << " popped\n" ;
								}
								break ;
			case 's':
			case 'S': st.show() ;
								break ;
		}
		
		print_menu();
	}


}

void print_menu()
{
	cout <<	"Enter A- to add a purchase order,\n"
					"Enter P- to process a PO, or\n"
					"Enter S- to show Stack, or\n"
					"Enter Q- to quit.\n" ;
}
