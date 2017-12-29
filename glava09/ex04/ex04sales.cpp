#include <iostream>
#include "stdio.h"
#include "ex04.h"


namespace SALES	{
	
	using  std::cout ;
	using  std::cin ;
	
	
	void setSales (Sales &s , const double ar[], int size){
		s.min = ar[0];
		s.max = ar[0];
		s.average = 0;
		
		

		
		// find max, max and average value
		double counter = 0; 
		for (int i =0 ; i< size ; i++){
			if (s.min > ar[i]){
				s.min = ar[i] ;
			}
			if (s.max < ar[i]){
				s.max = ar[i];
			}
			s.average += ar[i];
			counter++;
		}
		s.average = s.average/counter ;

		
		// find minimal values in ar[] and puts they into sales
		//	присваиваем первое значение из массива ar[] первому элементу s.sales[]
		//	обходим весь массив ar, сверяем значения оттуда и если оно меньше, то присваиваем 
		//		его элементу s.sales[]
		//
		//	для каждого следующего эл-та s.sales[] ищем самое минимальное значение из ar[]
		//		которого нет в s.sales[]
		//
		//	
		//
		//
		//
		//
		//
		//
		
		setMinSales ( s.sales , QUARTERS, ar, size) ;
		
		/*
		// put zerro if ar[] have more units than QUARTERS
		if ( size < QUARTERS ){
			for (int i = size ; i < QUARTERS; i++){
				s.sales[i] = 0 ;				
			}
		}
		
		*/
		
				
	}
	
	using namespace std;
	
	void setSales ( Sales &s){		
	
		struct Sales work ;
	
		printf("Prepeare to put values into 'Sales'\n");	
			for (int i=0; i< QUARTERS ; i++){
				printf("Put %2d sales value: ", i+1);
				cin >> s.sales[i] ;
			}
			
		work = s ;
		setSales (s, work.sales , QUARTERS ) ;
		
			
	}
	
	
	void showSales (const Sales &s){
		printf("ShowSales:\n");
		for (int i=0 ; i < QUARTERS ; i++){
			printf("\t sales[%02d] = %4.4f\n", i , s.sales[i] ) ;
		}
		
		printf("\t min = %4.4f \n", s.min);
		printf("\t max = %4.4f \n", s.max);
		printf("\t average = %4.4f \n", s.average);
			
	}
	

}

 
void setMinSales ( double * ar, const int arSize, const double *arSource, const int sourceSize)
{
	double min = getMin(ar, 0, arSize) ;
	//printf("Min = %5.5f\n", min);
	double max = getMax(ar, arSize);
	//printf("Max = %5.5f\n", max);
	
	double out ;
	int realMin ;
	realMin = arSize>=sourceSize ? sourceSize : arSize ;
	
	//ar[0] = getMin(arSource, 0 , sourceSize) ;
	for (int i =0 ; i< realMin; i++){
		ar[i] = out = 0 ;
		out = getNextMin (arSource, min, sourceSize);
		if ( out != 0 ){
			min = out ;
			ar[i] = out ;
		}
		//printf("%2d) ar[%2d] = %5.5f \t min = %5.5f \n", i, i, ar[i], min) ;
	}
	
}

// double getMin ( double *ar,  const double min , const int size ) 
double getMin ( const double *ar, const int start, const int size ) 
{
	double out = ar[start] ;
	for (int i =start ; i< size ; i++ ){
		//printf("\t%2d) ar[%2d] = %4.4f \t out = %4.4f \n", i,i, ar[i], out) ;
		if ( ar[i] < out ){
				out = ar[i] ;
				//printf("\t\t New min = %4.4f \n", out );
		}
		
	}
	
	return out ;
}


double getMax ( const double *ar, const int size ) 
{
	double out = ar[0] ;
	
	for (int i = 0 ; i<size; i++){
		if (ar[i] > out){
			out =  ar[i] ;
		}
	}
	//printf("Max = %5.5f\n", out );
	return out ;
}

double getNextMin ( const double *ar,  double min , const int size ) 
{
	double current ;
	double out = 0 ;
	double nextMin = getMax(ar , size);
	
	for (int i = 0; i<size ; i++){
		if ( ar[i] > min){
			if ( nextMin >= ar[i]){
				nextMin = ar[i] ;
				out = nextMin ;
			}			
		}
	}

	return out ;
}


 


