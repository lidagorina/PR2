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
long long kluch(long long p){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<long long> dis(2, p-2);
    long long kl = dis(gen);
    return kl;
}




long long modBinary(long long base, long long power, long long modulo) {

    if (modulo == 1) return 0;


    base %= modulo;

    long long result = 1;  // Используем long long вместо int!

    // Бинарное возведение в степень
    while (power > 0) {
    
        if (power %2 == 1) {  // power % 2 == 1
            result = (result * base) % modulo;
        }
        
        base = (base * base) % modulo;
        power /= 2;  // power /= 2
    }

    return result;
}



void  El_gamala (string mess){
    vector<pair<long long, long long>> shifr;
    long long p = 19997; //любое простое число (большое)
    long long g = 5;
    long long x = kluch(p);

    long long y = modBinary(g, x, p);


    cout << "простое число: " << p << endl << "первообразный корень: "<< g << " " << endl << "секретный ключ: "<< x << endl<< "открытый ключ: " << y << endl << endl;
    
    for(char m: mess){
        long long k = kluch(p);
        long long a = modBinary(g, k, p);
        long long b = modBinary(y, k, p) * __int128(m) % p;
        shifr.push_back({a, b});
        
        cout << "ключ для конкретного символа: " << k << endl;
        cout << "зашифрован пара для символа " << m<< ": " << a << " " << b << endl << endl;
    }
    cout << "расшифровка" << endl;
    for(const auto& para: shifr){
        long long a1 = modBinary(para.first, (p-1-x), p);
        // long long a2 = modBinary(a1, (p-2), p);
        long long M = para.second * a1 % p;

        cout << "пара для символа: "<< para.first << " " << para.second << "расшифр символ: " << char(M) << endl;
        

    }

}

