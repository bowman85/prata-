#include <iostream>
#include <string>

void strcount (const string * str);

int main()
{
	using namespace std;
	string input ;
	char next;
	cout 	<< "Enter a line: \n";
	getline(cin , input);
	while (cin)
	{
		cin.get(next);
		while(next != '\n'){
			cin.get(next);
		}
		strcount (input);
		cout << "Enter next line (empyt line to quit):\n" ;
		getline(cin, input);
		
	}
	cout << "Bye\n" ;
	

return 0;
}

void strcount (const string * str)
{
	using namespace std ;
	
	static int total = 0 ;
	int count = 0 ;
	cout << "\"" << str << "\" contains " ;
	while (*str++){
		count++;
	}
	total+= count;
	cout << count << " characters\n" ;
	cout << total << " characters total\n" ;
		
}