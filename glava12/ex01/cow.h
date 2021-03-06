#ifndef   COW_H_
#define		COW_H_

#define		SIZE   20  

using std::cout ;
using std::endl ;
	
class Cow 
{
	

	private:
		char _name[SIZE] ;
		char * _hobby  ;
		double _weight ;
	public:
		Cow();
		Cow( const char *nm, const char *ho, double wt );
		Cow( const Cow & c) ;
		~Cow() ;
		Cow & operator = (const Cow &c );
		void ShowCow () const ;

};



#endif   // COW_H_
