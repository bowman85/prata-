#include "ex04.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin ;
using std::endl;


static unsigned long next = 1;

int my_rand(void) ;

Person::~Person () {}    // чистый виртуальный деструктор

void Person::Show() const 
{
    cout <<"Name:\t\t " << _name << endl ;
    cout <<"Lastname:\t " << _last_name << endl ;
}


void Person::Set()
{
    cout << "Enter person's name: " ;
    getline(cin, _name) ;
    cout << "Enter person's lastName: " ;
    getline(cin, _last_name) ;
    
}


void Gunslinger::Draw() const 
{
    cout << "FigthActive:\t " << _fight_time << endl ;
    cout << "Score:\t\t " << _score << endl ;
}

void Gunslinger::Show() const 
{
    cout << "Gunslinger:\n" ;
    Person::Show();
    Draw();
    
}

void Gunslinger::Set()
{
    Person::Set();
    cout << "Enter Gunslinger fight_time: " ;
    cin >> _fight_time ;
    while(cin.get() != '\n'){
        continue ;
    }
    cout << "Enter Gunslinger score: " ;
    cin >> _score ;
    while(cin.get() != '\n'){
        continue ;
    }
}

void Gunslinger::Get()
{
    cout << "Enter Gunslinger fight_time: " ;
    cin >> _fight_time ;
    while(cin.get() != '\n'){
        continue ;
    }
    cout << "Enter Gunslinger score: " ;
    cin >> _score ;
    while(cin.get() != '\n'){
        continue ;
    }
}


int my_rand()
{
    t = time(NULL) ;  
    next = (( t + rand()) * next * 1103515245 + 12345) % 53;    
    if (next == 0 ) {
        next = 1;
    }
    return next ;
}

void PokerPlayer::Draw()  const 
{
    cout << "Rand_card:\t " <<  my_rand() << endl;
}

void PokerPlayer::Show() const 
{
    cout << "PokerPlayer:\n" ;
    Person::Show();
    Draw();
}

void PokerPlayer::Set()
{
    Person::Set();
}


void BadDude::Set()
{
    Person::Set();
    Gunslinger::Get();
}

void BadDude::Gdraw() const
{
    Gunslinger::Draw();
}


void BadDude::Cdraw() const 
{
    PokerPlayer::Draw();
}

void BadDude::Show() const 
{
    cout << "BadDude:\n" ;
    Person::Show();
    Gdraw() ;
    Cdraw() ;
}














