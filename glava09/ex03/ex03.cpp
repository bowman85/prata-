#include <iostream>
#include "stdio.h"


#define  SIZE		3 
#define  LINESIZE	20


struct chaff
{
	char dross[20];
	int slag;
};

void setData ( struct chaff * str, int size) ;
void printData ( struct chaff * str, int size) ;

int main(void)
{

//	создаю 3х массив структур с помощью new
//	тоже самое, но с размещением и new
//	заполняю 1вый массив значениями
//	вывожу значения в цикле
//
//
//
//


using namespace std ;

	int size_of  = sizeof (chaff) ;
	char buffer[size_of * SIZE ] ;
	
	chaff * s1 = new (buffer) chaff [SIZE]  ;
	chaff * s2 ;

	cout << "Size of struct 'chaff': " << size_of << endl ;
	s2 = new chaff[SIZE] ;

	setData(s1 , SIZE );
	printData (s1, SIZE );

	setData(s2 , SIZE );
	printData (s2, SIZE );
	
	
	printf("Erasing chaff s2...\n");
	delete  s2;
	printf("Completed successful!\n");

	
printf("Good bye!\n");

return 0;
}


void setData ( struct chaff * str, int size) 
{
	using namespace std ;
	cout << "Funct setData(...)  \n"; 
	int i = 0 ;
	do {
		printf("Put %d data: \n", i+1) ;
		cin.get ( str[i].dross, LINESIZE) ;
		char ch ;
		
		while (cin.get(ch) && ch !='\n' ){
				
		}


		} while ( i++ < size-1 ) ;
	
}

void printData ( struct chaff * str, int size) 
{
	printf("Funct printData(...)\n");
	for (int i=0; i< size; i++){
		printf("%2d) data: %s\n", i+1, str[i].dross) ;
	}
}














