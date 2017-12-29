// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"



void display(const Stonewt & st, int n);


int main()
{
	using std::endl ;
	
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8, 2);

	
	Stonewt st01 = 300 ;
	Stonewt st02 (215.333) ;
	Stonewt st03 (21, 19 , 2) ;
	
	Stonewt st_sum01 ;
	Stonewt st_sum02 ;
	Stonewt st_razn; 
	Stonewt st_ymnoj01 ;
	Stonewt st_ymnoj02 ;
	
	
	cout << "st01 :" << endl << st01 << endl ;
	cout << "st02 :" << endl << st02 << endl ;
	st_sum01 = st01 + st02 ;
	
	cout << "st_sum01 = st01 + st02 " << endl ;
	cout << "st_sum01 :" << endl << st_sum01 << endl ;
	
	cout << "------------------------" << endl << endl ;
	
	cout << "st01 :" << endl << st01 << endl ;
	cout << "st02 :" << endl << st02 << endl ;
	st_razn = st01 - st02 ;
	
	cout << "st_razn = st01 - st02 " << endl ;
	cout << "st_razn :" << endl << st_razn << endl ;
	


	cout << "------------------------" << endl << endl ;
	cout << "st01 :" << endl << st01 << endl ;

	st_razn = - st01  ;
	
	cout << "st_razn = - st01 " << endl ;
	cout << "st_razn :" << endl << st_razn << endl ;



	cout << "------------------------" << endl << endl ;
	st_ymnoj01 =  st01 * 5;
	cout << "st_ymnoj01 =  st01 * 5 " << endl << st_ymnoj01 << endl ;
	
	
	cout << "------------------------" << endl << endl ;
	st_ymnoj02 =  st02 * 7.3;
	cout << "st_ymnoj02 =  st02 * 7.3 " << endl << st_ymnoj02 << endl ;
	
	st_ymnoj02 =  4.33 * st02;
	cout << "st_ymnoj02 =  4.33 * st02 " << endl <<  st_ymnoj02 << endl ;
	cout << "st02 =\n" << st02 <<	endl ;
	
	
	
	
	
	
	
/*	
	
    cout << "The celebrity weighed ";
    //incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    taft.show_lbs();
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    incognito.show_stn();
    cout << "After dinner, the President weighed ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";

		incognito.setMode(1) ; 
		//wolfe.setMode(1) ;
		//taft.setMode(1) ;
		
		cout << "\n\n1) POUND_INT:\n"; 
		cout << "The celebrity weighed ";
    cout << incognito ;
    cout << "The detective weighed ";
    //wolfe.show_stn();
    cout << wolfe ;
    cout << "The President weighed ";
    //taft.show_lbs();
    cout << taft ;
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    //incognito.show_stn();
    cout << incognito ;
    cout << "After dinner, the President weighed ";
    //taft.show_lbs();
    cout << taft ;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";




		incognito.setMode(2) ;
		///wolfe.setMode(2) ;
		//taft.setMode(2) ;
		
		cout << "\n\n2) POUND_FLOAT:\n"; 
		cout << "The celebrity weighed ";
    cout << incognito ;
    cout << "The detective weighed ";
    //wolfe.show_stn();
    cout << wolfe ;
    cout << "The President weighed ";
    //taft.show_lbs();
    cout << taft ;
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    //incognito.show_stn();
    cout << incognito ;
    cout << "After dinner, the President weighed ";
    //taft.show_lbs();
    cout << taft ;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";


*/






    // std::cin.get();
	cout <<"Good bye!\n" ;
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
