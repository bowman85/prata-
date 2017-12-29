#include <iostream>
#include <string.h>

#define SIZE		5
#define LENGHT		200


template  <typename T >
void maxn( T mass[] , int size );

template <> maxn <char> ( char mass[][LENGHT] , int size);

using namespace std ;

int main(void)
{
	int 	massI [5] = { 1 , 3, 4353, 2, 5 } ;
	double	massD [8] = { 23.5, 23.2, 23.5, 2.2 ,14.02, 134.04, 542.2223, 45436.555 } ;
	
	char  massC [5][LENGHT] = {
				"strlen - calculate the length of a string",
				"The strlen() function calculates the length of the string s, excluding the terminating null byte ('\0').",
				"RETURN VALUE",
				"The strlen() function returns the number of bytes in the string s.",
				"For an explanation of the terms used in this section, see attributes(7)."
	};
	

	cout <<"1 funct:\n" ;
	maxn ( massI, 5 );

	cout <<"2 funct:\n" ;
	maxn( massD, 8 ) ;

	cout <<"3 funct:\n" ;
	maxn ( massC, 5 ) ;


return 0;
}



template  <typename T >
void maxn( T mass[] , int size )
{
		T max = 0 ;
		for (int i ; i< size ; i++ ){
			if ( max < mass[i] ){
				max = mass[i] ;
			}
		}
		cout << "Max value: " << max << endl ;
	
}


template <> maxn <char> ( char mass[][LENGHT] , int size)
{
	char * p = mass[0] ; 
	int lenght = 0 ;
	for ( int i =0 ; i< size ; i++){
		if ( lenght < strlen (mass[i] ) {		
			p = mass[i] ;
		}
		cout << "line " << i+1 << " have " << strlen (mass[i] )  << size << ". Text: " << mass[i]  << endl ;
	}
	
	cout << "Biggest line: " << p ;	
}