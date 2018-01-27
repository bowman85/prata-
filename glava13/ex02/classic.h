#ifndef		CLACCIC_H_
#define		CLACCIC_H_

#include "cd.h"

class Classic : public Cd
{
	
	private:
		char *_best ;
		
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
	int len = (strlen( best_comp) +1 ) ;
	std::cout << "LEN = " << len << "\n" ;
	_best = new char [len] ;
	strcpy ( _best , best_comp ) ;
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
	_best = new char [(strlen( "NONE") +1)] ;
	strcpy ( _best , "NONE" ) ;
}


Classic::~Classic() 
{
	delete [] _best ;
}


Classic & Classic::operator= (const Classic &cl) 
{
	using namespace std ;
	
	if (this == &cl ){
		return *this ;
	}
	
	
	if ( _best != nullptr ){
		cout << "_best != nullptr" << endl ;
		delete [] _best ;
	}
	
	_best = new char [(strlen( cl._best) +1 )] ;
	strcpy ( _best , cl._best) ;
	
	//_best = new char (sizeof( cl._best) +1 ) ;
	//strcpy ( _best , cl._best) ;
	
	Cd::operator= (cl) ;
	

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