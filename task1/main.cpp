#include<iostream>
#include "utils.h"
using namespace std;

int main(){

    long long a ;
    long long p ;
    long long x ;

    

    cout << "Введите основание  a: ";
    cin >> a;

    cout << "Введите степень p: ";
    cin >> p;

    cout << "Введите модуль x: ";
    cin >> x;

    cout << endl;
    cout << "Вычисляем " << a << "^" << p << " mod " << x << endl;
    cout << endl;

    cout << "Теорема Ферма" << endl;
    Ferma(a, p, x);

    cout << endl << "бинароное возведение в степень" << endl;
    modBinary(a, p, x) ;



    return 0;
}