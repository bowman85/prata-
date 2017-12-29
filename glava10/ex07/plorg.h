#ifndef 	PLORG_H
#define 	PLORG_H

#define 	SIZE	20

class Plorg
{
private:
	char name_[SIZE] ;
	int  index_ ;
	
public:
	Plorg( const char *name = "Plorga", int index = 50 ) ;

	void change_index ( int val )  ;
	void show () ;
	

};



#endif //PLORG_H