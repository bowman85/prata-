#include <iostream>
#include <string>

#define SIZE 	20
int main (void)
{

	using namespace std ;
	/*
	char name_f[SIZE] ;
	char name_s[SIZE] ;
	
	
	
	cout<< "F_Name : " ;
	cin.getline(name_f, SIZE);
	cout<< "S_Name : " ;
	cin.getline(name_s, SIZE);
	
	cout << "Your name: " << name_f <<", " << name_s <<endl ;
	*/
	
	string name_f;
	string name_s;
	
	cout<< "F_Name : " ;
	getline(cin, name_f);
	cout<< "S_Name : " ;
	getline(cin, name_s);
	
	cout << "Your name: " << name_f <<", " << name_s <<endl ;
	
	


return 0;
}