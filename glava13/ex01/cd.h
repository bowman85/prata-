#ifndef		CD_
#define		CD_

#include <iostream>
#include <cstring>


	
class Cd {
	
	private:
		char performers[50];
		char label[20];
		int selections;
		double playtime;
	public:
		Cd(const char *s1, const char * s2, int n , double x) ;
		Cd (const Cd & d) ;
		Cd();
		virtual ~Cd();
		Cd & operator=(const Cd &d ) ;
		//void Report() const;
		
		// by VOLK
		
		virtual void Report() const;
	
	
};


Cd::Cd(const char *s1, const char * s2, int n , double x) 
{
	strncpy ( performers , s1, 50 ) ;
	strncpy ( label , s2, 20 ) ;
	
	selections = n ;
	playtime = x ;
		
}


Cd::Cd (const Cd & d) 
{
	strncpy ( performers , d.performers , 50 ) ;
	strncpy ( label , d.label , 20 ) ;	
	selections = d.selections ;
	playtime = d.playtime ;		
}

Cd::Cd()
{
	strcpy ( performers, "None" );
	strcpy ( label, "Noname" );
	selections = 0 ;
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
	
	strncpy ( performers , d.performers , 50 ) ;
	strncpy ( label , d.label , 20 ) ;	
	selections = d.selections ;
	playtime = d.playtime ;	

	return *this ;	
}


void Cd::Report() const
{

	using std::cout ;
	using std::endl ;
	cout << "Cd info:" << endl ;
	cout << "\t performers:\t " << performers << endl ;
	cout << "\t label:\t\t " << label << endl;
	cout << "\t selections:\t " << selections << endl ;
	cout << "\t playtime:\t "  << playtime << endl ;
		
}


#endif		// CD_