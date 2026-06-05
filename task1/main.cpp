#include<iostream>
#include "utils.h"
using namespace std;

int main(){

    long long a;
    long long p;
    long long x;

    cout << "a: ";
    cin >> a;

    cout << "p: ";
    cin >> p;

    cout << "x: ";
    cin >> x;


    cout << "Теорема Ферма" << endl;
    Ferma(a, p, x);

    cout << "бинароное возведение в степень" << endl;
    cout << modBinary(a, x, p);



    return 0;
}