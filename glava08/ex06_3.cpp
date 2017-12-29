#include <iostream>
#include <string>

#include <string.h>


#define SIZE		5
#define LENGHT		200


using namespace std ;


template  <typename T >
void maxn( int size , T mass[] );

//template <> void maxn <string [] > ( int size , string mass[] );
//template <> void maxn < char > ( int size , char *mass );
//template <> void maxn <string > ( int size , string mass[] ) ;
template <> void maxn <char > ( int size , char *mass[] ) ;

int main(void)
{
	int 	massI [5] = { 1 , 3, 4353, 2, 5 } ;
	double	massD [8] = { 23.5, 23.2, 23.5, 2.2 ,14.02, 134.04, 542.2223, 1899.555 } ;
	
	//char massC[LENGHT] = {	"strlen - calculate the length of a string" } ;
	
	/* */
	char  massC [5][LENGHT] = {
				"A strlen - calculate the length of a string",
				"AA The strlen() function calculates the length of the string s, excluding the terminating null byte ('\0').",
				"AAA RETURN VALUE",
				"AAAA The strlen() function returns the number of bytes in the string s.",
				"AAAAA For an explanation of the terms used in this section, see attributes(7)."
	};
	/*  */

	cout <<"1 funct:\n" ;
	maxn ( 5, massI );

	cout <<"2 funct:\n" ;
	maxn( 8, massD ) ;

	cout <<"3 funct:\n" ;
	maxn ( 5, massC ) ;
	//maxn (5 , massC) ;


return 0;
}



template  <typename T >
void maxn( int size , T mass[] )
{
		T max = 0 ;
		for (int i ; i< size ; i++ ){
			if ( max < mass[i] ){
				max = mass[i] ;
			}
		}
		cout << "Max value: " << max << endl ;
	
}


//template <> void maxn <char **> ( int size , char mass[size][LENGHT] )
//template <> void maxn <string > ( int size , string mass[] )
//template <> void maxn < char > ( int size , char mass[size][LENGHT] )

template <> void maxn <char > ( int size , char *mass[] ) 
{
/*
	char * p = mass[0] ; 
	//string  p = mass[0] ; 
	int lenght = 0 ;
	for ( int i =0 ; i< size ; i++){
		if ( lenght < strlen (mass[i] ) {		
		//if ( lenght  < mass[i].length() ) {
			p = mass[i] ;
			lenght = strlen ( mass[i] ) ;
		}
		cout << "line " << i+1 << " have " << strlen ( mass[i] ) << " size. Text: " << mass[i]  << endl ;
	}
	cout << endl; 
	cout << "Biggest line: " << p << endl;	
*/

}