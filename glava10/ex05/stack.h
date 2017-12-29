#ifndef 	STACK_H
#define		STACK_H

#define SIZE	35



struct	customer
{
	char 	fullname[SIZE];
	double	payment;
};


typedef customer  Item ;


class Stack 
{
private:
	enum {MAX = 10 } ;
	Item items[MAX];
	int 	top ;
	double	total ;
	
public:
	Stack() ;
	bool isempty()	const ;
	bool isfull()	const ;
	
	bool push 	(	const Item & item ) ;
	bool pop	(	Item & item ) ;
	
	void show () ;

	
	
};





#endif	// STACK_H