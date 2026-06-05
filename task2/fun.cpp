#include "fun.h"
#include <iostream>
#include <algorithm>
#include <set>

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

