#ifndef     PERSON_H_
#define     PERSON_H_

#include <string>

class Person
{
    private:
        std::string _name;
        std::string _last_name;
        
    public:
        Person (): _name("None"), _last_name("None") {} 
//        Person (const std::string & n = "None" , const std::string & ln = "None" ): _name(n), _last_name(ln) {}
        Person (const std::string & n , const std::string & ln ): _name(n), _last_name(ln) {}
    virtual ~Person()   = 0 ;  // чистый виртуальный деструктор
    virtual void Show() const  = 0; // чистая виртуальная функция 
    virtual void Set() ;
};


class Gunslinger : virtual public Person 
{
    private:
        double  _fight_time;
        int     _score ;

    protected:
        void Get();
    public:
        Gunslinger () : Person(), _score(0), _fight_time(0) {}
        Gunslinger ( const std::string & n , const std::string & ln , double ft = 0, int sc = 0) 
            : Person(n, ln), _fight_time(ft), _score(sc) {} 
            
        ~Gunslinger() {} 
            
        void    Draw() const ;
        void    Show() const  ;   // чистая виртуальная функция 
        void    Set() ;

};



class PokerPlayer : virtual public Person
{
    private:
        //double card_draw ;    

    public:
        PokerPlayer () : Person()   {}
        PokerPlayer (const std::string & n , const std::string & ln ) : Person(n , ln) {}
        
        void Draw() const ;
        void Show() const ;
        void Set() ;
        
};

class BadDude  : public Gunslinger , public PokerPlayer
{
    private:
    
    public:
        BadDude () : Gunslinger(), PokerPlayer() {}
        BadDude ( const std::string & n , const std::string & ln , double ft = 0, int sc = 0) :
            Gunslinger(n, ln, ft, sc) , PokerPlayer(n, ln) {}
      
        void Set() ;
        void Gdraw() const ;
        void Cdraw() const ;
        void Show() const  ;

};




#endif
