// glava 04 
#include <iostream>
#include <string.h>



#define SIZE 40 

using namespace std ;

int main(void)
{
	char f_name[SIZE] ;
	char l_name[SIZE] ;
	char letter ;
	
	
	cout << "F. Name: " ;
	cin.getline(f_name, SIZE) ;
	
	cout << "S. Name: " ;
	cin.getline(l_name, SIZE) ;
	
	char text [SIZE];
	cout << "Your Letter grade: " ;
	cin.getline(text, SIZE) ;
	//strncpy (&text[0], &letter, 1) ;
	letter = text[0] ; 
	
	cout << "Params: " << endl;
	cout << "F. Name: "<< f_name << endl ;
	cout << "S. Name: "<< l_name << endl ;
	cout << "Grade  : "<< (char) (letter+1) << endl ;
	
	
	
	
	return 0;
}