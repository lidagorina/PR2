#include<iostream>
#include <string>
#include "fun.h"
using namespace std;


int main(){

    setlocale(LC_ALL, "Russian");
    
    // long long u, v;

    string mess;

    cout << "введите сообщение: ";
    
    
    string line;
        while(getline(cin, line)){
        mess += line + "\n";

        }
    


    // Evklid_extended(c, m, u, v);

    El_gamala(mess);


    return 0;
}

//control d (для запуска 1)