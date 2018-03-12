#ifndef     QUEST_03_
#define     QUEST_03_

#include <iostream>
#include <cstring>

using namespace std; 

class Frabjous
{
    private:
        char fab[20];
    public:
        Frabjous (const char * s = "C++") : fab(s) {} 
        virtual void tell() {cout << fab; }
        
};

class Gloam : private Frabjous
{
    private:
        int glip;
    public:
        Gloam (int g = 0, const char * s = "C++") ;
        Gloam (int g, const Frabjous & f) ;
        void tell();
};


Gloam::Gloam (int g , const char * s)
: glip(g), Frabjous(s) 
{
//    strcpy ( fab, s) ;
}


Gloam::Gloam ( int g, const Frabjous & f) 
: glip(g), Frabjous(f)
{
    //strcpy(fab, f.tell() ) ;
}

void Gloam::tell()
{
    Frabjous::tell() ;
    cout << " " << glip  << endl ;
}





#endif      //  QUEST_03_
