#ifndef		CD_
#define		CD_

#include <cstring>

class Cd {
	
	private:
		char performers[50];
		char label[20];
		int selelctions;
		double playtime;
	public:
		Cd(const char *s1, const char * s2, int n , double x) ;
		Cd (const Cd & d) ;
		Cd();
		~Cd();
		Cd & operator=(const Cd &d ) ;
		//void Report() const;
		
		// by VOLK
		
		virtual void Report() const;
	
	
};


Cd::Cd(const char *s1, const char * s2, int n , double x) 
{
	strncpy ( performers , s1, 50 ) ;
	strncpy ( label , s2, 20 ) ;
	
	selelctions = n ;
	playtime = x ;
		
}


Cd::Cd (const Cd & d) 
{
	strncpy ( performers , d.performers , 50 ) ;
	strncpy ( label , d.label , 20 ) ;	
	selelctions = d.selelctions ;
	playtime = d.playtime ;		
}

Cd::Cd()
{
	strcpy ( performers, "None" );
	strcpy ( label, "Noname" );
	selelctions = 0 ;
	playtime = 0.0 ;
		
}

Cd::~Cd()
{
		
}

Cd & Cd::operator=(const Cd &d ) 
{
	if ( this == &d ) {
		return * this ;
	}
	
	
	
	
	return *this ;	
}


void Cd::Report() const
{
		
}


#endif		// CD_