#include <iostream>

using std::cout;

#include "stonewt.h"

void display (const Stonewt & st, int n ) ;

int main(void)
{
	Stonewt incognito = 275 ;
	Stonewt wolfe (285.7) ;
	Stonewt taft(21, 8);
	cout << "The celebrity weighed " ;
	incognito.show_stn();
	cout << "The detective weighed " ;
	wolfe.show_stn();
	cout << "The President weghed ";
	taft.show_lbs();
	incognito = 275.8 ;
	taft = 325;
	cout << "After dinner, the celebrity weghed ";
	incognito.show_stn();
	cout << "After dinner, the President weghed ";
	taft.show_lbs();
	display (taft,2);
	cout << "The wrestler weghed even more.\n";
	display (422, 2) ;
	cout << "No stone left unearned\n" ;
	return 0 ;


return 0 ;
}


void display (const Stonewt &st, int n)
{
	for (int i = 0; i < n; i++ )
	{
		cout << "Wow! " ;
		st.show_stn();
		
	}
}

