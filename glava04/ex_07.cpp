#include <iostream>
#include <ios>
#include <iomanip>

#define SIZE	20

int main(void)
{
	using namespace std ;
	
	struct  CandyBar {
		char name[SIZE];
		float height;
		int calls;
	};

	CandyBar	snack[3] = {
		{ 	"Nacka Nunck",	2.3, 350 },
		{	"Snickers", 55, 420 },
		{	"Mars",		57, 380 }			
	};
	
	
	for (int i =0 ; i < 3 ; i++){
		cout << setw(10) << i << ")" << endl ;
		cout << "Your candy: " << endl;
		cout << "name: " << snack[i].name  << endl;
		cout << "height: " << snack[i].height << endl;
		cout << "calls: " << snack[i].calls << endl;
		cout << "--------------------------" << endl;
		
	}

return 0;
}


