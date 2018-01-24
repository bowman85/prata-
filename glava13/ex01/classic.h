#ifndef		CLACCIC_H_
#define		CLACCIC_H_

#include "cd.h"

class Classic : public Cd
{
	
	private:
		char _best[50] ;
		
	public:
		Classic( const char * best_comp, const char * group, const char * albom, int compo_val, double time_play) ;
		Classic( const Classic & cl) ;
		Classic() ;
		~Classic() ;
		Classic & operator= (const Classic &cl) ;
		
		void Report () const ;
	
	
};


Classic::Classic(const char * best_comp, const char * group, const char * albom, int compo_val, double time_play) 
{
		
}


Classic::Classic( const Classic & cl) 
{
		
}

Classic::Classic() 
{
		
}


Classic::~Classic() 
{
		
}


Classic & Classic::operator= (const Classic &cl) 
{
	 
	return *this;
}

void Classic::Report () const 
{
		
}



#endif 		//CLACCIC_H_