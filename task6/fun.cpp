#include "fun.h"
#include <iostream>
#include <algorithm>
#include <set>
#include<random>
#include <string>

using namespace std;



long long Evklid_extended(long long a, long long b, long long &u, long long &v) {
    u = 1, v = 0;
    long long u1 = 0, v1 = 1;
    
    while (b) {
        long long q = a / b;
        
        long long r = a % b;     
        a = b;
        b = r;
        
        long long u2 = u - q * u1;  // новое u
        u = u1;
        u1 = u2;
        
        long long v2 = v - q * v1;  // новое v
        v = v1;
        v1 = v2;
    }
    
    return a;
}


void cep_drob(long long a, long long b){

    if(b == 0){
        cout << "на ноль делить нельзя" <<endl;
        return;
    }


    vector<long long> cep;
    long long r = a % b;
    long long q = a / b;



    while(b != 0){ // usual Evklid
        q = a / b;
        cep.push_back(q);

        r = a % b;
        a = b;
        b = r;
    }

    for(auto c: cep){
        cout << c << endl; // цулая часть при деление
    }



}


void reshenie(){

    long long u;
    long long v;
    long long a = 1256;
    long long b = 847;
    long long d = 119;

    long long gcd = Evklid_extended(a, b, u, v);
    cout << "НОД " << gcd << endl << "лин разложение по евк  u = " << u << "  v = " << v << endl;

    if(d % gcd != 0){
        cout << "нет целочисленных решений" << endl;
    }

    long long k = d / gcd;
    long long x = u * k;
    long long y = v * k;

    cout << endl;
    cout  << "частное решшение (одно из многих) x = " << x << "  y = " << y << endl;
    cout << endl;
    cout  << "x = " << x << " + " << b / gcd << " * n" << endl;
    cout << endl;
    cout  << "y = " << y << " + " << a / gcd << " * n" << endl;

}

