#include "utils.h"
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;



bool IsPrime(long long pow){
    if(pow == 1){
        return false;
    }
    if(pow == 2 || pow == 3){
        return true;
    }
    if(pow % 2 == 0){
        return false;
    }

    for(long long i = 3; i * i <= pow; i+=2){
        if(pow % i == 0){
            return false;
        }
    }
    return true;
}

long long gcd(long long a, long long pow){
    while(pow){
        a%=pow;
        swap(a,pow);
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


    long long temp = power;  
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



void Ferma(long long a, long long pow, long long mod){ 
    if(!IsPrime(mod)){
        cout << "pow - должно быть простым" << endl;
        return ;
    }

    long long reduced_a = a % mod;
    if(reduced_a == 0){
        cout << "a кратно mod, теорема Ферма не выполняется" << endl << endl;
        return;
    }
    
    if(gcd(a, mod) != 1){
        cout << "a и mod не взаимно простые" << endl;
        return ; 
    }

    long long new_pow = pow % (mod - 1);
    cout << endl << "Сокращаем степень: " << pow << " mod " << (mod - 1) << " = " << new_pow << endl;


    long long step_result = 1;
    for(long long i = 1; i <= new_pow; i++) {
        step_result = (step_result * reduced_a) % mod;
        cout << endl << "Шаг " << i << ": " << reduced_a << "^" << i << " mod " << mod << " = " << step_result << endl;
    }
    cout << "Теорема Ферма - Результат: " << step_result << endl;

    


}