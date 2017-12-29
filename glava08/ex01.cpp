#include <iostream>

void myprint  ( const char *line, int val=1);

using namespace std ;

int main(void)
{
	myprint("This is one line!");
	cout<< endl;
	myprint("This is second line 10 times!", 10);
	
	return 0;
}

void myprint  ( const  char *line, int val )
{
	if (val != 0 ){
		for (int i = 0 ; i < val; i++){
			cout << "\"" << line << "\"" << endl ;
		}
	
	}
	
}