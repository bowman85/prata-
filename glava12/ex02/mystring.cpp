#include <iostream>
#include <cstring>
	


#include "mystring.h"

int String::num_string = 0 ;

String::String (const char * s)
{
	len = std::strlen (s) ;
	str = new char [len + 1 ] ;
	std::strcpy(str , s ) ;
	num_string++;
}

String::String ()
{
	len = 0;
	str = new char [1] ;
	str = '\0';
	num_string++ ;
}

String::String ( const String &st)
{
	len = st.len ;
	str = new char [len+1];
	std::strcpy(str, st.str);
	
	num_string++;

}

String::~String ()
{
	delete [] str;
	--num_string;
}

String &  String::operator = ( const String & st)
{
	 if ( this == &st){
	 		return *this ;
	 }
	delete [] str ;
	
	len = st.len ;
	str = new char [len+1];
	std::strcpy(str, st.str);
		
	return *this ;
}

String & String::operator  = ( const char * s ) 
{
	 	len = std::strlen (s ) ;
		delete [] str ;
		str = new char [len+1] ;	 
		
		return *this ;
}

char & String::operator[] ( const int i) const 
{
		return str[i] ;
}


bool operator < ( const String & st1 , const String &st2 ) 
{
	return ( std::strcmp(st1.str , st2.str ) < 0 ) ;
}

bool operator > ( const String & st1 , const String &st2 ) 
{
	return  st2 < st1 ;
}


bool operator == ( const String & st1 , const String &st2 ) 
{
	return ( std::strcmp(st1.str , st2.str ) == 0) ;
}

std::ostream &  operator << ( std::ostream & os , const String & st) 
{
		/*
		os << "\n" ;
		os << "len: " << st.len << std::endl ;
		os << "str: '"<< st.str << "'" << std::endl ;
		*/
		os << st.str ;
		return os ;

}

std::istream & operator >> (std::istream & is , String &st )
{
	using std::cout ;
	using std::endl ;
	cout << "Enter your string:"  ;
	
	char temp[String::CINLIM] ;
	is.get(temp, String::CINLIM ) ;
	if (is ){
		st = temp ;
	}
	while (is && is.get() != '\n' ){
		continue ;
	}
	
	return is ;	
}

































