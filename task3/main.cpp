#include<iostream>
#include "fun.h"
using namespace std;

int main(){


    long long c;
    long long m;

    cout << "основание c: ";
    cin >> c;


    cout << "модуль m: ";
    cin >> m;

   long long d = mod_inverse(c, m);

   cout << endl << "обратное число к основанию = " << d << endl;
   cout << c << " ^ -1 mod " << m << " = " << d << endl;
   cout << c << " * " << d << " mod " << m << " = " << (c * d) % m << endl;

    


    return 0;
}