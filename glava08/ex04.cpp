#include <iostream>
using namespace std;

#include <cstring>


struct stringy{
	char * str;
	int ct;
};

//void show( const struct stringy s);
void show( const struct stringy s, int val = 1);
//void show( const char * line );
void show( const char *line , int val = 10) ;


void set( struct stringy & str, const char * line);


int main(void)
{
	stringy beany ;
	char testing[]  = "Reality isn't what it used to be." ;
	set (beany, testing);
	
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	


return 0;
}

void set( struct stringy & str, const char * line)
{
	int size ;
	size = 1+ strlen( line) ;
	char * mass = new char[size] ;
	strcpy ( mass , line) ;
	
	str.str = mass ; 
	
}


void show( const struct stringy s)
{
		cout << "Funct show:" << endl; 
		cout << "str: " << s.str ;
		cout << endl ;
}

void show( const struct stringy s, int val)
{
		cout << "Funct show:" << endl; 
		for (int i =0 ; i < val; i++ ){
		cout << "str: " << s.str ;
		cout << endl ;			
		}
}

void show( const char * line )
{
		cout << "Funct show:" << endl; 
		cout << "line: " << line ;
		cout << endl ;
	
}

void show( const char *line , int val) 
{
		cout << "Funct show:" << endl; 
		for (int i =0 ; i < val; i++ ){
		cout << "line: " << line ;
		cout << endl ;			
		}
	
}













