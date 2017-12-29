#include <iostream>
#include <array>
#include <string>
#include <vector>

#include <string.h>

int main()
{
	char 	c_actor[30] ;
	short 	c_betsie[100];
	float	c_chuck[13];
	long double	c_dipsea[64];
	
	using namespace std ;
	array <char , 30> actor ;
	array <short, 100> betsie ;
	array <float, 13> chuck ;
	array <long double, 64> dipsea ;
	
	
	int val[5] = { 1,3,5,7,9 };
	
	int even ;
	even = val[0];
	even = val[4];
	
	float ideas = val[1] ;
	cout << "ideas = " << ideas << endl;
	
	
	char text[] = "cheeseburger" ;
	string str = "Waldorf Salad" ;
	
	struct fish {
		char vid[20];
		float height ;
		double lenght;
	};
	
	fish losos = { "morskaya", 2.5, 54.04 }  ;
	
	enum Response { No, Yes, Maybe }; 
	
	double ted = 88 ;
	double *pd = &ted ;
	cout << "*pd = " << *pd << endl ;
	
	float treacle[10] ;
	for (int i = 0 ; i <10 ;i++ ){
		treacle[i] = i*i ;
	}
	
	float *pf = treacle ;
	
	cout << "pf[0] = "<< pf[0] << endl ;
	cout << "pf[9] = "<< pf[9] << endl ;
	
	cout << "Enter int value: " ;
	int val13 ;
	//cin  >> val13 ;
	val13 = 48 ;
	cout << "Your entered: " << val13 << endl;
	
	int * val_dinam = new int [val13] ;
	for (int i = 0 ; i <val13 ;i++ ){
		val_dinam[i] = i*i ;
	}
	for (int i = 0 ; i <val13 ;i++ ){
		//cout<< "val_dinam[" << %2i <<"] = " << val_dinam[i] << endl ;
		printf(" val_dinam[%2d] = %5d \n", i, val_dinam[i] );
	}
	
	vector < int > val_vect(val13) ;
	
	val_vect[0] = val_dinam[0] ;
	
	// 14
	cout << (int *) "Home of the jolly bytes" <<endl;
	
	fish *d_karas = new fish ;
	strcpy( d_karas->vid , "ozernaya") ;
	d_karas->height = 5.12 ;
	d_karas->lenght = 56.61;
	
	
	cout << "*d_karas: vid - " << d_karas->vid << "  height - " << d_karas->height << " lenght - " << d_karas->lenght  << endl ;
	
	
	// 17
	vector <string> v_obj(10) ;
	array < string, 10> a_obj ;
	
	
	
	
	
	
	
	
	delete [] val_dinam ;
	return 0;
}


	

