#include<iostream>
#include "utils.h"
using namespace std;

int main(){

    long long a ;
    long long p ;
    long long mod ;

    

    cout << "Введите основание  a: ";
    cin >> a;

    cout << "Введите степень p: ";
    cin >> p;

    cout << "Введите модуль mod: ";
    cin >> mod;

    cout << endl;
    cout << "Вычисляем " << a << "^" << p << " mod " << mod << endl;
    cout << endl;

    cout << "Теорема Ферма" << endl;
    Ferma(a, p, mod);

    cout << endl << "бинароное возведение в степень" << endl;
    modBinary(a, p, mod) ;



    return 0;
}