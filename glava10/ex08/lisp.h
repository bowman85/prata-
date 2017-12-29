#ifndef		LIST_H
#define		LIST_H

typedef int Item ;

class List 
{
private:
	enum {MAX = 10 } ;
	Item mass[MAX] ;
	int top ;

public:
	List () { top = 0 ;} ;
	void add ( Item val ) ;
	void change (int position, Item newVal ) ;
	bool isfull();
	bool isempty();
	void show() ;


}





#endif 	// LIST_H