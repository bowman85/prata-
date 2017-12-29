#include <iostream>

#define S	5

using namespace std ;

template <typename T>
void maxT ( T mass[S] ) ;

int main(void)
{

	int 	massI [S] = { 1 , 3, 4353, 2, 5 } ;
	double	massD [S] = { 23.5, 23.2, 23.5, 2.2 ,14.02 } ;

	cout <<"1 funct:\n" ;
	maxT( massI ) ;

	cout <<"2 funct:\n" ;
	maxT( massD ) ;



return 0 ;
}

template <typename T>
void maxT ( T mass[S] ) 
{
		T max = 0 ;
		for (int i ; i< S ; i++ ){
			if ( max < mass[i] ){
				max = mass[i] ;
			}
		}
		cout << "Max value: " << max << endl ;
}