#include <iostream>
#include <cstring>
#include <cctype>	


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
	str[0] = '\0';
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
	std::cout << "destructor № " << num_string <<"\n" ;
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
		strcpy( str , s) ;
		
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


String & String::operator + (  const String & st2) 
{
 	
 	int len1 = len ;
	int len2 = std::strlen (st2.str) ;
	char current_str[len1+1] ;
	strcpy ( current_str , str ) ;
	delete [] str ;
	
	int len_total = len1 + len2 + 1 ;
	
	str = new char [len_total] ;
	strcpy ( str, current_str) ;
	strcpy ( &(str[len1]) , st2.str ) ; 

	 
	std::cout <<"len1 = " << len1 <<"\n" ;
	std::cout <<"len2 = " << len2 <<"\n" ;
	std::cout <<"len_total = " << len_total <<"\n" ;
	
	std::cout << "current_str = " << current_str << "\n" ;
	std::cout << "str         = " << str << "\n" ;
	std::cout << "st2.str     = " << st2.str << "\n" ;

	len = len_total;
	return *this ;
}


String & String::stringLow() 
{
	for (int i = 0 ; i <= len ; i++ ){
		str[i] = tolower( (str[i]) ) ;	
	}
	
	return *this ;

}


String & String::stringUp() 
{
	for (int i = 0 ; i <= len ; i++ ){
		str[i] = toupper( (str[i]) ) ;	
	}
	
	return *this ;

}

int  String::sovpad ( const char ch ) const
{

	int out = 0 ;
	for (int i =0 ; i < len ; i++ ){
		//std::cout << i << " )  " << str[i] << std::endl ;
		//if ( 'e' == 'e' ) {
		if (str[i] == ch ){
			out++ ;
		}
	}
	//std::cout << "ch = " << ch << std::endl ;
	return out ;
}
























