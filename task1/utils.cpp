#include "utils.h"
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;



bool IsPrime(long long p){
    if(p == 1){
        return false;
    }
    if(p == 2 || p == 3){
        return true;
    }
    if(p % 2 == 0){
        return false;
    }

    for(long long i = 3; i * i <= p; i+=2){
        if(p % i == 0){
            return false;
        }
    }
    return true;
}

bool gcd(long long a, long long p){
    while(p){
        a%=p;
        swap(a,p);
    }
    return a;

}



long long modBinary(long long base, long long power, long long modulo) {

if (modulo == 1) return 0;

base %= modulo;
long long result = 1; 


while (power > 0) {
   
    if (power % 2 == 1) {  
        result = (result * base) % modulo;
    }
    
    base = (base * base) % modulo;
    power /= 2;  
}

return result;
}



void Ferma(long long a, long long p, long long x){
    if(!IsPrime(p)){
        cout << "p - должно быть простым";
        return;
    }

    if(a % p == 0){
        cout << "делятся на друг друга a и p" << endl;
        return;
    }
    
    if(gcd(a, p) != 1){
        cout << "a и p не взаимно простые";
        return;
    }

    long long new_pow = x % (p - 1);

    cout << modBinary(a, new_pow, p) << endl; //теорема ферма


}