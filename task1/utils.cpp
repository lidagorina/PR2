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

long long gcd(long long a, long long p){
    while(p){
        a%=p;
        swap(a,p);
    }
    return a;

}



void modBinary(long long base, long long power, long long modulo) {

    if (modulo == 1){
        cout << "модуль не должен быть равен 1" << endl;
        return;
    };

    base %= modulo;
    long long result = 1; 
    long long current_base = base;
    long long current_power = power;
    string binary = "";


    long long temp = power;  // используем временную переменную
    if(temp == 0) {
        binary = "0";
    } else {
        while(temp > 0) {
            binary = (temp % 2 == 0 ? "0" : "1") + binary;
            temp /= 2;
        }
    }


    cout << "Двоичное представление степени " << power << ": " << binary << endl;
        
    int step = 1;
    while(current_power > 0) {
        if(current_power % 2 == 1) {
            result = (result * current_base) % modulo;
            cout << "Шаг " << step << ": бит = 1, result = " << result << endl;
        } else {
            cout << "Шаг " << step << ": бит = 0, пропуск" << endl;
        }
        step++;
        
        current_base = (current_base * current_base) % modulo;
        current_power /= 2;
    }

   cout << "Результат: " << result << endl;
}



void Ferma(long long a, long long p, long long x){ //a^p mod x
    if(!IsPrime(p)){
        cout << "p - должно быть простым" << endl;
        return ;
    }

    long long reduced_a = a % x;
    if(reduced_a == 0){
        cout << "a кратно x, теорема Ферма не выполняется" << endl << endl;
        return;
    }
    
    if(gcd(a, x) != 1){
        cout << "a и x не взаимно простые" << endl;
        return ; 
    }

    long long new_pow = p % (x - 1);
    cout << endl << "Сокращаем степень: " << p << " mod " << (x - 1) << " = " << new_pow << endl;


    long long step_result = 1;
    for(long long i = 1; i <= new_pow; i++) {
        step_result = (step_result * reduced_a) % x;
        cout << endl << "Шаг " << i << ": " << reduced_a << "^" << i << " mod " << x << " = " << step_result << endl;
    }
    cout << "Теорема Ферма - Результат: " << step_result << endl;

    


}