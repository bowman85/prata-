#include <iostream>

using namespace std;
extern int x;
namespace  n1
{
	int y= -4;
} 

void another()
{
	cout << "anoter(): " << x << ", " << y << endl ;
}