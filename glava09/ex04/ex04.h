#include <iostream>


namespace SALES{

	const int QUARTERS = 4 ;
	struct Sales{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	
	void setSales (Sales & s, const double ar[], int n);
	
	void setSales(Sales & s) ;
	void showSales(const Sales & s);
	

}


//double getMin (double *ar,  const double min , const int size )  ;
//double getMin ( const double *ar, const int size ) ;
double getMax ( const double *ar, const int size );
double getMin ( const double *ar, const int start, const int size ) ;
double getNextMin ( const double *ar,  double min , const int size );
void setMinSales ( double * ar, const int arSize, const double *arSource, const int sourceSize) ;
