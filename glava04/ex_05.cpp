#include <iostream>

#define SIZE	20

int main(void)
{
	using namespace std ;
	
	struct  CandyBar {
		char name[SIZE];
		float height;
		int calls;
	};

	CandyBar	snack = {
		"Nacka Nunck",
		2.3,
		350
	};
	
	cout << "Your candy: " << endl;
	cout << "name: " << snack.name  << endl;
	cout << "height: " << snack.height << endl;
	cout << "calls: " << snack.calls << endl;

return 0;
}


