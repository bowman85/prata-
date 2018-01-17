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
	// line
	Queue line01 (qs) ;
	Queue line02 (qs) ;
	
	cout << "Enter the number of simlation hours: ";
	int hours;
	cin >> hours;
	
	long cyclelimit = MIN_PER_HR * hours;
	
	Item temp;
	long turnaways = 0;
	long customers = 0 ;
	long served = 0 ;
	long sum_line = 0 ;
	int wait_time01 = 0;
	long line_wait01 = 0 ;
	
	int wait_time02 = 0;
	long line_wait02 = 0 ;
	
	
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
				if (line01.isfull() && line02.isfull()){
					turnaways++;
				} else{
					customers++;
					temp.set(cycle);
					
					if (line01.isfull()){
						line02.enqueue(temp);						
					} else if (line02.isfull()){
						line01.enqueue(temp);						
					} else if (line01.queuecount()	>= line02.queuecount() ) {
						line02.enqueue(temp);
					} else {
						line01.enqueue(temp);
					}
									
					//line01.enqueue(temp);
					//line02.enqueue(temp);
				}
			}
			
			
			
			///		если в очереди человек закончил работу с банкоматом, то
			///			удаляем эл-т из очереди,
			///			копируем его время работы с терминалом
			///			добавляем время ожидания очереди.
			///			увеличиваем счетчик обслуженных лиц.
			///
			///
			///
			///
			///
			
			// line01
			if (wait_time01 <= 0 && !line01.isempty()){
				line01.dequeue(temp);
				wait_time01 = temp.ptime();
				line_wait01 += cycle - temp.when();
				served++;
			}
			
			if (wait_time01 > 0 ){
				wait_time01--;
			}
			
			sum_line +=line01.queuecount();
			
			
			
			// line02
			if (wait_time02 <= 0 && !line02.isempty()){
				line02.dequeue(temp);
				wait_time02 = temp.ptime();
				line_wait02 += cycle - temp.when();
				served++;
			}
			
			if (wait_time02 > 0 ){
				wait_time02--;
			}
			
			sum_line +=line02.queuecount();
			
			
		}
		
		if ( customers > 0 ){
			//average_wait_time =  ((double) line_wait01/served + (double) line_wait02/served ) / 2.0;
			average_wait_time =  ( ((double) line_wait01+line_wait02)/(double)served );
		} else {
			average_wait_time = 0 ;
		}
		
		cout << "average_wait_time=\t " << average_wait_time << endl ;
		cout << "\t perhour=\t\t " << perhour << endl ;
		cout << "\t line_wait01=\t " << line_wait01 << endl ;
		cout << "\t line_wait02=\t " << line_wait02 << endl ;

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



