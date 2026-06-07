#include<iostream>
#include "fun.h"
using namespace std;

int main(){

    long long u, v;

    long long c;
    long long m;

    cout << "c: ";
    cin >> c;


    cout << "m: ";
    cin >> m;

    long long gcd = Evklid_extended(c, m, u, v);

    
    
    cout << "НОД = " << gcd << endl << "линейное разложение по Евклиду  u = " << u << "  v = " << v << endl;
    cout << c << " * " << u << " + " << m << " * " << v << " = " << gcd << endl;



    return 0;
}