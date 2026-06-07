#include "fun.h"
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;



long long Evklid_extended(long long a, long long b, long long &u, long long &v) {
    u = 1, v = 0;
    long long u1 = 0, v1 = 1;
    long long u2 = 0, v2 = 0;

    long long q, r;
    int step = 0;
    
    while (b) {
        step ++;

        q = a / b;
        
        r = a % b;     
        a = b;
        b = r;
        
       
        u2 = u - q * u1; // новое u
        u = u1;
        u1 = u2;
        
        
        v2 = v - q * v1;  // новое v
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

