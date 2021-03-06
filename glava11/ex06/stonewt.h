// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
	//using namespace std::cout ;
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    enum {W_STONE , W_POUND_INT , W_POUND_FLOAT } ;
    //int mode ;
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
	static int mode ;
public:
    Stonewt(double lbs);          // constructor for double pounds
    //Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt(int stn, double lbs) ;
	Stonewt(int stn, double lbs, int units); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    void show_lbs() const;        // show weight in pounds format
    void show_stn() const;        // show weight in stone format
	void setMode(int newMode) { mode = newMode ;}
	
	Stonewt  operator+ (const Stonewt & b ) const ;	
	Stonewt  operator- (const Stonewt & b ) const ;	
	Stonewt  operator- () const ;	
	Stonewt  operator* (double n  ) const ;
	
	
	bool operator> (Stonewt &st ) ;
	bool operator>= (Stonewt &st ) ;
	bool operator< (Stonewt &st ) ;
	bool operator<= (Stonewt &st ) ;
	bool operator== (Stonewt &st ) ;
	bool operator!= (Stonewt &st ) ;
	
	
	
	friend std::ostream & operator<<( std::ostream & os ,	const Stonewt & st) ;
	friend Stonewt  operator* ( double n , Stonewt & st) ;
	
    
};
#endif
