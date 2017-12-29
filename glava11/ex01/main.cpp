#include <iostream>
#include <cstdlib>
#include <ctime>


#include <fstream>


#include "vect.h"


int main(void)
{
	
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result (0.0, 0.0);
	unsigned long steps = 0 ;
	double target;
	double dstep;
	
	ofstream  file ;
	file.open("test_file.txt");
	
	cout << "Enter  target distance (q to quit): ";
	
	while (cin >> target)
	{
		cout << "enter step length: " ;
		if (!(cin >> dstep))
		{
			break;
		}
		while (result.magval() <target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			file << steps << " ) " << result << endl ;
			
			
			result = result +step;
			steps++;
		}
		
		cout <<"After " << steps <<" steps, the subject "
				"has the following location:\n"; 
		file <<"After " << steps <<" steps, the subject "
				"has the following location:\n"; 

				cout <<result <<endl;
				file <<result <<endl;
				
				result.polar_mode();
				cout << "or\n" << result << endl;
				cout << "Average outward distance per step = "
					 <<  result.magval()/steps <<endl;
					 
				file <<result <<endl;	 
				file << "or\n" << result << endl;
				file << "Average outward distance per step = "
					 <<  result.magval()/steps <<endl;
					 
				steps = 0 ;
				result.reset (0.0, 0.0);
				cout << "Enter target distance (q to quit) : ";
				file << "Enter target distance (q to quit) : ";
				
		
	}
	
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() !='\n' ){
		continue;
	}
	
	

return 0 ;
}

