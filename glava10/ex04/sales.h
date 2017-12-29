#ifndef 	SALES_H
#define 	SALES_H

#include <iostream>


#include <stdio.h>


using namespace std ;

class Sales
{
	private:
		static const int QUARTERS = 4 ;
		double sales_[QUARTERS] ;
		double average_;
		double max_ ;
		double min_ ;
		
		double getMax		( const double ar[], const int count ) ;
		double getMin		( const double ar[], const int count ) ;
		double getAverage 	( const double ar[], const int count ) ;
		
		
	public:
	
		Sales() {} ;
		Sales( const double *ar , const int count) 
		{
			for (int i = 0 ; i< QUARTERS ; i ++){
				if (i > count) {
					sales_[i] = 0 ;
				}
				else{
					sales_[i] = ar[i] ;
				}
			}
			average_ =  getAverage (ar , count);
			max_	= getMax(ar, count);
			min_ 	= getMin(ar, count);
			
		}
		
		void showSale()
		{
			cout <<"showSale(): \n"; 
			for (int i =0 ; i< QUARTERS ; i++ ){
				printf("sales[%2d] = %5.5f\n", i ,sales_[i] );
			}
			
		}
		
	
	
};

void setSales (Sales &s , const double ar[] , const int count) 
{
	Sales * new_s = new Sales ( ar, count) ;
	
	s = *new_s ;
	
	delete new_s ;
}

double Sales::getMax( const double ar[], const int count ) 
{
		double max = ar[0] ;
		for (int i=0; i< count ; i++){
				if (max < ar[i]){
					max = ar[i] ;
				}
		}
		
		return max ;
}

double Sales::getMin( const double ar[], const int count ) 
{
		double min = ar[0] ;
		for (int i=0; i< count ; i++){
				if (min > ar[i]){
					min = ar[i] ;
				}
		}
		
		return min ;
	
}

double Sales::getAverage ( const double ar[], const int count ) 
{
	double average = 0 ; 
	for (int i =0 ; i< count ; i++){
		average += ar[i] ;		
	}
	
	average = average/(double)count ;
	return average ;
}























#endif	// SALES_H
