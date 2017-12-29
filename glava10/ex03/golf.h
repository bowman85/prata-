#ifndef   	GOLF_H
#define		GOLF_H


#include <iostream>
#include <string.h>

using namespace std ;
static const int LEN = 40;		
		
class  Golf
{
	

	private:
	

		char fullname[LEN] ;
		int handicap;
		
		
	public:
		//void setgolf (const char *name, int hc);
		Golf () 
		{	cout <<"Constructor in action... \n" ;
			strcpy (this->fullname , "Noname" );
		} 
		
		Golf (const char *name, int hc) 
		{
			int i ;
			for (i =0 ; name[i] != '\0'; i++){
				this->fullname[i] = name[i] ;
			}
			this->fullname[i+1] = '\0' ;
			this->handicap = hc ;
			
		}
		
		~Golf() {	cout << "Destructor in action... \n" ;} ; 
		
		void set_handicap ( int hc) 
		{
			this->handicap = hc ;
		}
		
		void showgolf() ;


};


void Golf::showgolf() 
{

	cout << "This is showgolf()\n" ;
	cout << "fullname:\t " << fullname << endl;
	cout << "handicap:\t " << handicap << endl;
	cout << "--------------------" << endl;
}



int setgolf(	Golf &g )
{
	using namespace std ;
	
	char name[LEN];
	int handicap ;
	
	cout <<	"Put your fullname: \n" ;
	cin.getline ( name, LEN ) ;
	
	cout << "Put handicap: \n"; 
	cin >> handicap ;
	while ( cin.get() != '\n' ){
		cin.clear();
	}
	
	Golf *own_g = new Golf ( name, handicap );
	
	g = *own_g ;
	
	delete own_g ;
	
}


#endif // 		GOLF_H

