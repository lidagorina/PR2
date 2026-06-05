#include<iostream>
#include <string>
#include "fun.h"
using namespace std;


int main(){

    setlocale(LC_ALL, "Russian");
    locale:: global(locale(""));
    wcout.imbue(locale(""));
    // long long u, v;

    wstring mess;

    cout << "введите сообщение: ";
    
    
    wstring line;
        while(getline(wcin, line)){
        mess += line + L"\n";

        }
    


    // Evklid_extended(c, m, u, v);

    El_gamala(mess);


    return 0;
}

//control d (для запуска 1)