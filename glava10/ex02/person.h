#ifndef		PERSON_H
#define		PERSON_H

#include <iostream>
#include <string>

using namespace std ;


class Person{

	
	private: 
		static const int LIMIT = 25 ;
		string 	lname_;
		char	fname_[LIMIT];

	public:
		Person() { lname_ = "" ; fname_[0] = '\0'; }
		Person( const string &ln, const char * fn = "Heyyou" )
		{
			lname_ = ln  ;
			
			int i = 0 ;
			while (i < LIMIT && fn[i] != '\0' ){
				fname_[i] = fn[i] ;
				i++ ;
			}
		}
		
			
		void Show() const
		{
				cout << "lname: \t\t" << this->lname_ << endl;
				cout << "charfname:\t"<< this->fname_ << endl;
		}
		
		void FormalShow() const {
				cout << "charfname:\t"<< this->fname_ << endl;
				cout << "lname: \t\t" << this->lname_ << endl;			
		}

};



#endif