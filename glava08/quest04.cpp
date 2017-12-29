#include <iostream>
#include <fstream>
#include <cstdlib>

#include "stdio.h"


struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
	
};

void showBox ( struct box &) ;
void changeBox (struct box &) ;

using namespace std ;

int main (void)
{
	struct box mybox = {
		"This is my box",
		40.5,
		75.5,
		23.5,
		54.1
		
	};

	printf("This is 1 mybox\n");
	showBox( mybox);
	printf("\nThis is 2 mybox after function:\n");
	changeBox(mybox);
	showBox( mybox) ;
	

return 0;
}


void showBox ( struct box &mybox) {
	ios_base::fmtflags initial ;
	initial = cout.setf(ios_base::fixed);
	cout.precision(1);
	cout.width(30);
	cout<< "Maker: " ;
	cout.width(15) ;
	cout.width(15) ;
	cout<<"height: " ; 
	
	cout.width(15) ;
	cout<<"width: " ; 
	cout.width(15) ;
	cout<<"length: "; 
	cout.width(15) ;
	cout<<"volume: "; 
	
	cout << endl ;
	
	cout.width(30);
	cout<< mybox.maker ;
	cout.width(15) ;
	cout<< mybox.height ;
	cout.width(15) ;
	cout<< mybox.width ;
	cout.width(15) ;
	cout<< mybox.length;
	cout.width(15) ;
	cout<<mybox.volume;
	
	
	cout.setf(initial);
	cout << endl ;
	
	
}
	
void changeBox (struct box & b ) {
	b.volume = b.width * b.height * b.length ;
	
}
