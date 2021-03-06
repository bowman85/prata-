#include <iostream>
#include <valarray>     // заголовочный файл массивов значений
#include <cstdlib>
#include <iomanip>
 
using namespace std;
int main()
{
    srand(time(NULL));
    valarray<int> array1(15);    // создаем массив значений размером - 15 элементов
    valarray<int> array2(15);    // создаем массив значений размером - 15 элементов
 
    cout << setw(38) << left << "Первый массив: ";
    for(int i = 0; i < array1.size(); i++) {
        array1[i] = rand() % 10;
        cout << setw(2) << array1[i] << " ";
    }
 
    cout << endl << setw(38) << "Второй массив: ";
    for(int i = 0; i < array2.size(); i++) {
        array2[i] = rand() % 10;
        cout << setw(2) << array2[i] << " ";
    }
 
    cout << "\nСумма элементов массивов: ";
    valarray<int> array3 = array1 + array2;
    for(int i = 0; i < array3.size(); i++) {
        cout << setw(2) << array3[i] << " ";
    }
 
 cout << endl ;
 cout << "Good bye!\n" ;
    return 0;
}
