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

    // long long x = c * d;
    
    cout << "НОД " << gcd << endl << "лин разложение по евк  u = " << u << "  v = " << v << endl;



    return 0;
}