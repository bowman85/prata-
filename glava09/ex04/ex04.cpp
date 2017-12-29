#include <iostream>
#include "stdio.h"
#include "ex04.h"


int main(void)
{
	printf("Hello\n");
	
	
	
	//double ar[] = { 9189.456, 10546, 15044, 17000.777, 1, 12.5, 55, 88, 73.5, 46.1, 36.8, 1.5, 1.75, 8, 13.5 } ;
	//double ar[] = { 4345, 23, 23.5} ;
	double ar[] = {1, 21.5, 564, 654, 66, 12.888 ,36, 3588.565, 445.666, 98.1015, 212.56, 54.11, 654, 12.12 } ;
	int size = sizeof ( ar) / sizeof(double) ;
	
	//printf("1 function setSales() : \n");
	
	using namespace SALES ;
	struct Sales s1 ;
	
 
 
	setSales ( s1, ar, size) ;
	/*
	for (int i =0 ; i< QUARTERS ; i++){
		printf("s.sales[%2d] = %5.5f \n", i , s1.sales[i] );
	}
	*/
	
	showSales (s1) ;
	
	
	struct Sales s2 ;
	setSales (s2) ;
	showSales(s2) ;
	

printf("Good bye\n");
return 0;
}	