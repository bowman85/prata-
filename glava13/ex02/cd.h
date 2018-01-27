#ifndef		CD_
#define		CD_

#include <iostream>
#include <cstring>


	
class Cd {
	
	private:
		char * performers;
		char * label;
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
	
	performers = new char ( strlen (s1) + 1) ;
	strcpy ( performers , s1 ) ;
	
	//strncpy ( label , s2, 20 ) ;
	label = new char ( strlen (s2) + 1) ;
	strcpy ( label , s2 ) ;
	
	selections = n ;
	playtime = x ;
		
}


Cd::Cd (const Cd & d) 
{
	performers = new char ( strlen (d.performers) + 1) ;
	strcpy ( performers , d.performers ) ;
	label = new char ( strlen (d.label) + 1) ;
	strcpy ( label , d.label ) ;
	
	//strncpy ( performers , d.performers , 50 ) ;
	//strncpy ( label , d.label , 20 ) ;	
	selections = d.selections ;
	playtime = d.playtime ;		
}

Cd::Cd()
{
	performers = new char ( strlen ("None") + 1) ;
	strcpy ( performers , "None" ) ;
	
	label = new char ( strlen ("None") + 1) ;
	strcpy ( label , "None" ) ;
	//strcpy ( performers, "None" );
	//strcpy ( label, "Noname" );
	selections = 0 ;
	playtime = 0.0 ;
		
}

Cd::~Cd()
{
	delete performers ;
	delete label ;
		
}

Cd & Cd::operator=(const Cd &d ) 
{
	if ( this == &d ) {
		return * this ;
	}
	
	delete performers ;
	delete label ;
	performers = new char ( strlen (d.performers) + 1) ;
	strcpy ( performers , d.performers ) ;
	label = new char ( strlen (d.label) + 1) ;
	strcpy ( label , d.label ) ;
	
	
	//strncpy ( performers , d.performers , 50 ) ;
	//strncpy ( label , d.label , 20 ) ;	
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