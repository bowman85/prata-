#include <iostream>

#include "mystring.h"

using namespace std ;

int main()
{
		String st1 ;
		st1 = "hi, aloha";
		cout << "st1 : " << st1 << endl ;
		
		/* */
		String st2 ("This is st2 string.");
		String st3 ("st3 st3 st3 st3!!! ");
		String st4 ("444444444");
		
		
		cout << "st2 : " << st2 << endl ;
		cout << "st3 : " << st3 << endl ;
		cout << "st4 : " << st4 << endl ;
		/*  */
		String st5 ("st5 ffff ");
	   
		st5 = st3 + st4 ;
		cout << "st5= st4 + st3 : " << st5 << endl ; 
		/* */

		String st6 ("HelL YeaARGGHHH!!! wAnt MoRe !!!") ;
		
		cout <<"st6 : " << st6 << endl ;
		cout <<"after stringlow\n" ;
		st6.stringLow();	
		cout <<"st6 : " << st6 << endl ;
 
 		cout <<"st6 arfter stringUp: " << st6.stringUp() << endl ;
 		
 		st6.stringLow();
 		char ch = '!' ;
 		int chi = (int ) ch ;
 		for ( int i = 'a' ; i < 'z' ; i++ ) {
	 		ch = i ;
	 		//cout << "chi: " << chi << endl ;
	 		int sovpad = st6.sovpad( ch ) ;
	 		cout <<"sovpad('" << ch << "') of st6 : " << sovpad << endl ;
	 		
 		} 
 		cout << "chi: " << chi << endl ;
 		int sovpad = st6.sovpad( ch ) ;
 		cout <<"sovpad('" << ch << "') of st6 : " << sovpad << endl ;
 		

		
		cout << "Good bye! \n" ;
return 0 ;
}
