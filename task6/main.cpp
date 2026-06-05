#include<iostream>
#include <string>
#include "fun.h"
using namespace std;

 
//1256*а + 847*b=119

int main(){

    long long a;
    long long b;

    cout << "Введите числ " << endl;
    cin >> a; 
    cout << "Введите знам " << endl;
    cin >> b; 

    cout << endl;
    cout << "разложение в цепную дробь" << endl;
    cep_drob(a, b);

    cout << endl;
    cout << "решение уравнения 1256*х + 847*у = 119" << endl;
    reshenie();
}

//control d (для запуска 1)