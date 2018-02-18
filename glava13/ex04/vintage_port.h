#include "port.h"

using namespace std ;

const char * vintage = "Vintage" ;

class VintagePort : public Port
{
	private:
		char * nickname;
		int year;
		
	public:
		VintagePort();
		VintagePort( const char * br, int b, const char * nn, int y) ;
		VintagePort (const VintagePort & vp);
		~VintagePort () { delete [] nickname ;} 
		VintagePort & operator= ( const VintagePort & vp ) ;
		void Show() const ;
		friend ostream & operator<< (ostream & os , const VintagePort & vp ) ;
		
		char * get_nickname() { return nickname ; } 
		int get_year() {return year; } 

};


VintagePort::VintagePort ()
:Port ()
{
	nickname = new char [ strlen("None") + 1 ] ;
	strcpy (nickname, "None" ) ;
	
	year = 0 ;	
}

VintagePort::VintagePort (const char * br, int b, const char * nn, int y) 
//:Port (br, vintage , b )
:Port (br, "Vintage" , b )
{
	
	nickname = new char [ strlen(nn) + 1 ] ;
	strcpy (nickname, nn ) ;	
	year = y ;		
}

VintagePort::VintagePort (const VintagePort &vp ) 
:Port( vp ) 
{
	nickname = new char [ strlen(vp.nickname) + 1 ] ;
	strcpy (nickname, vp.nickname ) ;	
	year = vp.year ;		
}

VintagePort & VintagePort::operator= (const VintagePort & vp)
{

	if (this == &vp ) {
		return *this ;
	}
	Port::operator= (vp) ;
	
	delete [] nickname ;
	nickname = new char [ strlen(vp.nickname) + 1 ] ;
	strcpy (nickname, vp.nickname ) ;	
	year = vp.year ;		

	return *this ;
}

void VintagePort::Show () const 
{
	//Port::operator<< (this) ;
	cout << "Vintage" << endl ;
	cout << "Nick:\t " << this->nickname ;
	cout << "Year:\t " << this->year ;
	cout << "Brand:\t " << this->brand << endl ;
	cout << "Style:\t " << this->style << endl ;
	cout << "Bottles:\t "<< this->bottles << endl ;	
	
}

ostream & operator<< (ostream & os , VintagePort & vp ) 
{
	os << vp.get_nickname() ; 
	os << ",\t " << vp.get_year() ;
	//os << ",\t " << vp.brand << ",\t " << vp.style << ",\t " << vp.bottles  ;
	os << (const Port & ) vp ;
	return os ;
}


