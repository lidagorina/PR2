#include "fun.h"
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;



long long Evklid_extended(long long a, long long b, long long &u, long long &v) {
    u = 1, v = 0;
    long long u1 = 0, v1 = 1;
    int step = 0;
    
    while (b) {
        step ++;
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

        cout << "Шаг: " << step << endl;
        cout << "q = " << q << endl;
        cout << "r = " << r << endl;
        cout << "u1 = " << u << endl;
        cout << "v1 = " << v << endl;
        cout << endl;
    }
    
    return a;
}


long long mod_inverse(long long a, long long m) {
    long long u, v;
    long long g = Evklid_extended(a, m, u, v);
    
    cout << "НОД = " << g << endl << "линейное разложение по Евклиду  u = " << u << "  v = " << v << endl;
    cout << a << " * " << u << " + " << m << " * " << v << " = " << g << endl;

    
    if (g != 1) {
        cout << "Обратного элемента не существует (НОД != 1)" << endl;
        return -1;
    }
    return (u % m + m) % m; 
}



