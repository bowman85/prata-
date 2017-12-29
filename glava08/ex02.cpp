#include <iostream>

#define S	50
struct CandyBar {
	char name[S];
	double height;
	int calls;
};

using namespace std ;


void show ( struct CandyBar & );
void set  ( struct CandyBar & );
void set  ( char name[], double * height, int &calls) ;

int main (void){

	cout << "This is main and I have 3 kind of candy:" << endl;
	
	struct CandyBar  c[5] = {
		{ "Snickers", 55 , 280 },
		{ "Mars", 50, 250},
		{ "Bounty", 52, 267},
		{0},
		{0}		
	};
	
	cout << "Put 4 candy:" << endl ;
	set( c[3] );
	cout << "Put 5 candy:" << endl ;
	set( c[4].name, &(c[4]).height, c[4].calls );
	
	cout <<" Now lets show our base:" << endl ;
	for (int i= 0 ; i < 5 ; i++){
		show(c[i]) ;
	}
	
	


return 0;
}


void show ( struct CandyBar & candy)
{
	cout<< "Funct show:\n";
	cout <<"Name: "<< candy.name <<"\theight:"<<candy.height	<< "\t canlls: " << candy.calls << endl ;
}


void set  ( struct CandyBar & candy )
{
	cout << "Put the name: " ;
	cin.getline( candy.name, S) ;
	cout << "Put the height: " ;
	cin >> candy.height ;
	cin.get() ;
	cout << "Put the calls: " ;
	cin >> candy.calls ;
	cin.get() ;
	
}

void set  ( char name[], double * height, int &calls)
{

	cout << "Put the name: " ;
	cin.getline( name, S) ;
	cout << "Put the height: " ;
	cin >> *height ;
	cin.get() ;
	cout << "Put the calls: " ;
	cin >> calls ;
	cin.get() ;

}






