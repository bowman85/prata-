#ifndef		STRING_H_
#define		STRING_H_

using 	std::ostream ;
using 	std::istream ;

class String
{
	private:	
		char * 	str ;
		int 		len ;
		static 	int num_string ;
		static 	const int CINLIM	= 80 ;
		
	public:
		String () ;
		String ( const char * s) ;
		String ( const String & ) ;
		~String () ;
		
		int length () const { return  len ; } 
		
		String & operator = (const  String & );
		String & operator = (const  char * ) ;
		char & operator[] (const int i ) const ;
		
		String & operator + ( const String & st2) ;
		
		friend	bool operator< (const String &st, const String &st2) ;
		friend	bool operator> (const String &st, const String &st2) ;
		friend	bool operator==(const String &st, const String &st2) ;
		friend 	ostream & operator<<( ostream & os, const String &st) ;
		friend  istream & operator>>( istream & is, String &st) ;

		static int HowMany() ;
			
		String & stringLow() ;
		String & stringUp()  ;
		
		int  sovpad ( const char ) const ;
			
} ;


#endif		// STRING_H_
