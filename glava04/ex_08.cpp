#include <iostream>
#include <ios>
#include <iomanip>

#define SIZE	20

int main(void)
{
	using namespace std ;
	
	struct Pizza_hant {
		char company[SIZE];
		int diametr;
		int height;
	};
	
	Pizza_hant zakaz ;
	int nomer = 0 ;
	do{
		cout<< "enter for quit\n" ;
		cout<< "Your company: " ;
		cin.getline(zakaz.company , SIZE);
		cout<< "Diametr Pizza: " ;
		//cin.get (zakaz.diametr, SIZE).get();
		cin >> zakaz.diametr ;
		cin.get();
		cout<< "Height  Pizza: " ;
		//cin.get (zakaz.height, SIZE).get() ;
		cin >> zakaz.height  ;
		cin.get();
		cout<< "Zakaz " << int(nomer++) ;
		cout<< zakaz.company << " want  " << zakaz.diametr <<" pizza, about " << zakaz.height << " height " << endl ;
		
		
	} while (zakaz.company[0] != '\0') ;
	
	
	cout << "good bye\n" ;
	
return 0;
}


