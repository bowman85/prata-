#include <iostream>	
#include <cstring>

using namespace std;

class Port
{
	protected:
		char * brand;
		char style[20];
		
		int bottles;
	public:
		Port (const char * br = "none", const char * st = "none", int b = 0) ;
		Port (const Port & p) ;
		virtual ~Port() {delete [] brand ; }
		Port & operator= (const Port & p ) ;
		Port & operator+=(int b) ;
		Port & operator-=(int b) ;
		int BottleCount() const { return bottles; }
		virtual void Show () const ;
		friend ostream & operator<< (ostream & os, const Port & p) ;

}; 


Port::Port (const char * br , const char * st , int b ) 
{
	brand = new char [ strlen(br) +1 ];
	strcpy (brand , br );
	
	strcpy (style, st ) ;
	
	bottles = b ;	
	
}


Port::Port ( const Port & p) 
{
	brand = new char [ strlen(p.brand) +1 ];
	strcpy (brand , p.brand	);
	
	strcpy (style, p.style ) ;
	
	bottles = p.bottles ;			
}

Port & Port::operator= (const Port & p)
{
	if (this == &p) {
		return *this ;
	}
	delete [] brand ;
	brand = new char [ strlen(p.brand) +1 ];
	strcpy (brand , p.brand	);
	strcpy (style, p.style ) ;
	bottles = p.bottles ;			
	
	return *this ;
}

Port & Port::operator+= ( int b ) 
{
	//this->bottles+ = b ;
	this->bottles = this->bottles + b ;
	return *this ;
}

Port & Port::operator-= ( int b ) 
{
	this->bottles = this->bottles - b ;
	return *this ;
}

void Port::Show () const 
{
	cout << "Brand:\t " << this->brand << endl ;
	cout << "Style:\t " << this->style << endl ;
	cout << "Bottles:\t "<< this->bottles << endl ;
}

ostream & operator<< (ostream &os , const Port & p)
{
	os << p.brand <<",\t " << p.style <<",\t " << p.bottles ;	
	return os ;
}





