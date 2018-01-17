#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60 ;

bool newcustomer (double x) ;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	
	std::srand(std::time(0) );
	cout << "Case Study: Bank of Heather Automatic Teller\n" ;
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line (qs) ;
	Queue line (qs) ;
	
	cout << "Enter the number of simlation hours: ";
	int hours;
	cin >> hours;
	
	long cyclelimit = MIN_PER_HR * hours;
	
	Item temp;
	long turnaways = 0;
	long customers = 0 ;
	long served = 0 ;
	long sum_line = 0 ;
	int wait_time = 0;
	long line_wait = 0 ;
	
	
	/*
	cout << "Enter the average numer of customers per hour: ";
	double perhour;
	cin>>perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;
	
	/* */
	double perhour = 0;
	double min_per_cust;
	
	double average_wait_time ;
	
	do {
		perhour++ ;
		min_per_cust = MIN_PER_HR / perhour;
		
		for (int cycle=0;	cycle <cyclelimit;	 cycle++){
			if (newcustomer(min_per_cust)){
				if (line.isfull()){
					turnaways++;
				} else{
					customers++;
					temp.set(cycle);
					line.enqueue(temp);
				}
			}
			
			if (wait_time <= 0 && !line.isempty()){
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				served++;
			}
			
			if (wait_time > 0 ){
				wait_time--;
			}
			
			sum_line +=line.queuecount();
			
			
			
		}
		
		if ( customers > 0 ){
			average_wait_time =  (double) line_wait/served ;
		} else {
			average_wait_time = 0 ;
		}

	} while ( average_wait_time <= 1.0 ) ;
	
	
	if (customers > 0 ){
	
		cout <<"customers accepted:\t " << customers << endl;
		cout <<"customers served:\t " << served << endl ;
		cout <<"turnaways:\t\t " <<turnaways << endl ;
		cout <<"average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield) ;
		cout<< (double) sum_line / cyclelimit <<endl;
		cout << "average wait time: "
				 << average_wait_time << "minutes\n" ;
	
	}	else {
		cout << "No custmers!\n" ;
	}
	
	cout <<"Done!\n" ;
	cout <<"Good bye\n" ;

return 0 ;
}


bool newcustomer (double x){
	
	return (std::rand() *x / RAND_MAX < 1) ;
}



