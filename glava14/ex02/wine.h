#ifndef     WINE_H_
#define     WINE_H_

#include <iostream>
#include <string>
#include <valarray>


class Wine  //: private std::string, private std::valarray<int>
{
    private:
        typedef std::valarray<int>          ArrayInt ;
//        typedef Pair<ArrayInt, ArrayInt>    PairArray ;
        
        std::string      _name ;
        //PairArray   _info ;
        ArrayInt    _info_year ;
        ArrayInt    _info_bottles ;    
        int         _years_total ;
    
    public:
        Wine (const char *l = "None", int y = 0) 
            : _name(l), _years_total(y), _info_year(y), _info_bottles(y) { } ;
        Wine (const char *l, int y, const int yr[], const int bot[] );
        //Wine (const char *l, int y) ;
        
        const std::string Label();
        int sum() ;
        void GetBottles();
        void Show();

};

Wine::Wine (const char *l, int y, const int yr[], const int bot[] )
: _name(l), _years_total(y), _info_year(yr, y), _info_bottles(bot, y) 
{ 
} 


const std::string    Wine::Label()
{
    return  _name ;
}


int Wine::sum()
{
    int summ = 0 ;
    for (int i=0; i< _years_total; i++){
        summ += _info_bottles[i] ;
    }
    return summ ;
}

void    Wine::GetBottles()
{

    std::cout << "Enter '" << _name << "' data for " << _years_total << " year(s) :\n" ;
    for (int i = 0 ; i < _years_total ; i++){
//        std::cout << "i - " << i << "\n" ;
    }
    for (int i = 0 ; i < _years_total ; i++){
        std::cout << "Enter year: \n" ;
        std::cin >> _info_year[i] ;                

        std::cout << "Enter bottles for that value: \n" ;
        std::cin >> _info_bottles[i] ;
    }
    while (std::cin.get() != '\n'){
       continue ;
    }

}


void Wine::Show()
{
    std::cout <<"Wine:   '" << _name <<"'\n" ;
    std::cout <<"\tYear\t Bottles\n";
    for (int i=0; i< _years_total; i++){
        std::cout<< "\t" << _info_year[i] <<"\t " << _info_bottles[i] <<"\n" ;
    }
}









#endif      //  WINE_H_
