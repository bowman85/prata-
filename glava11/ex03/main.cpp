#include <iostream>
#include <cstdlib>
#include <ctime>


#include <fstream>


#include "vect.h"
#include "step_info.h" 



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
	int repeat_times ;
	
	
	Step_info step_info ;
	
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
		cout << "enter repeat times: " ;
		if (!(cin >> repeat_times) ){
			break ;
		}
			step_info = Step_info();
		for (int i =0 ;i < repeat_times; i++ ){
			steps = 0 ;
			while (result.magval() <target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				file << steps << " ) " << result << endl ;
				

				
				result = result +step;
				steps++;
			}	

				cout << "steps: " << steps << endl ;
				step_info.set_val(steps) ;	
				
				step.reset( 0 , 0 ) ;
				result.reset(0, 0);	
			/*
				file <<"After " << steps <<" steps, the subject "
				"has the following location:\n"; 

				cout <<result <<endl;
				result.polar_mode();
				cout << "or\n" << result << endl;
				cout << "Average outward distance per step = "
					 <<  result.magval()/steps <<endl;
					 
				file <<result <<endl;	 
				file << "or\n" << result << endl;
				file << "Average outward distance per step = "
					 <<  result.magval()/steps <<endl;
					 
			*/
					 
		}

			cout << "Step_info: \n" ;
			cout << "min_step = " << step_info.get_min() << endl ;
			cout << "max_step = " << step_info.get_max() << endl ;
			cout << "average  = " << step_info.get_average()  << endl ;
			cout << "Vyalya!" << endl ;
		
		

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

