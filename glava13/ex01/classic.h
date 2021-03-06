#ifndef		CLACCIC_H_
#define		CLACCIC_H_

#include "cd.h"

class Classic : public Cd
{
	
	private:
		char _best[50] ;
		
	public:
		Classic( const char * best_comp, const char * group, const char * albom, int compo_val, double time_play) ;
//		Classic( const Classic & cl) ;
		Classic() ;
		~Classic() ;
		Classic & operator= (const Classic &cl) ;
		
		void Report () const ;
	
	
};


Classic::Classic(const char * best_comp, const char * group, const char * albom, int compo_val, double time_play) 
: Cd ( group, albom, compo_val, time_play) 
{
	strncpy ( _best , best_comp, 50 ) ;
}

/*
Classic::Classic( const Classic & cl) 
//: Cd ( cl.performers, cl.label, cl.selections, cl.playtime) 
{
	strncpy ( _best , cl._best , 50 ) ;
}
*/



Classic::Classic() 
: Cd ()
{
	strcpy ( _best, "None" ) ;
}


Classic::~Classic() 
{
		
}


Classic & Classic::operator= (const Classic &cl) 
{
	if (this == &cl ){
		return *this ;
	}
	
	Cd::operator= (cl) ;
	
	strncpy ( _best , cl._best , 50 ) ;
	return *this;
}

void Classic::Report () const 
{
	using std::cout ;
	using std::endl ;
	cout <<"Classic.\n" ;
	Cd::Report();
	/*
	cout << "Cd info:" << endl ;
	cout << "\t performers:\t " << performers << endl ;
	cout << "\t label:\t\t " << label << endl;
	cout << "\t selections:\t " << selections << endl ;
	cout << "\t playtime:\t " << playtime << endl ;
	*/
	cout << "\t best sing:\t ----" << _best << "----" << endl ;
		
}



#endif 		//CLACCIC_H_