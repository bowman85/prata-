// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
//  units - Stone

int Stonewt::mode = W_STONE ;


Stonewt::Stonewt(double lbs)
{
		mode = W_STONE ;
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
//  units - 'int' or 'double' pounds
Stonewt::Stonewt(int stn, double lbs, int units)
{
	mode = units ;
	std::cout << "Mode = " << mode << std::endl ;
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
		mode  = W_STONE ;
}

Stonewt::~Stonewt()         // destructor
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}

std::ostream & operator<<( std::ostream & os , const Stonewt & st ) 
{
	
	os <<"st.mode = " << st.mode << std::endl ;
	switch ( st.mode){
		case Stonewt::W_STONE:
			os << "units: W_STONE,\t" ;
	    os << st.stone << " stone, " << st.pds_left << " pounds\n";
			break;
		case Stonewt::W_POUND_INT:
			os << "units: W_POUND_INT,\t";
	    os << int(st.pounds) << " pounds\n";
			break;
		case Stonewt::W_POUND_FLOAT:
			os << "units: W_POUND_FLOAT,\t";
			os << st.pounds << " pounds\n";
			break;
		default:
			os <<"Error! undefined MODE !!!\n";
			break;
	
	}
	 
}

Stonewt::Stonewt(int stn, double lbs) 
{
	stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;	
}

Stonewt	Stonewt::operator+ ( const Stonewt & b) const 
{
	Stonewt out ;
	out = Stonewt( pounds + b.pounds) ;
	
	return out ;
}

Stonewt Stonewt::operator - (const Stonewt & b) const 
{
	Stonewt out ;
	out = Stonewt ( pounds - b.pounds ) ;
	return out ;
}

Stonewt Stonewt::operator - ( ) const 
{
	Stonewt out ;
	out = Stonewt ( -pounds ) ;
	return out ;
}


Stonewt Stonewt::operator* (double n) const 
{
	Stonewt out ;
	out = Stonewt ( pounds * n ) ;
	return out ;
}

Stonewt operator* ( double n , Stonewt & st) 
{
	Stonewt out = st * n ;
	return out ;
}

