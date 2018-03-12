#ifndef     QUEST_02_
#define     QUEST_02_

#define     <iostream>
#define     <string>


using namespace std ;

class Fragjous
{
    private:
        /* data */
        char fab[20] ;
    public:
        Fragjous (const char *s = "C++"): fab(s) {} ;
        virtual void tell()  {cout << fab ; }
        virtual ~Fragjous () {};

};

class Gloam
{
    private:
        int glip ;
        Fragjous fb ;
    public:
        Gloam (int g = 0, const char *s = "C++");
        Gloam (int g, const Frabjous & f) ;
        virtual ~Gloam () {};
        
        void tell();
};


void Gloam::tell()
{
    cout << "glip: " << glip << "\t fab: " << fb.tell() << endl ;
}

Gloam (int g = 0, const char *s = "C++")
: glip(g), fb(s)
{    
}


Gloam (int g, const Frabjous & f)
: glip(g), fb(f)
{
}













#endif      //  QUEST_02_


