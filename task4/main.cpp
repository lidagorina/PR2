#include<iostream>
#include <string>
#include "fun.h"
#include<locale>
using namespace std;


int main(){

    // setlocale(LC_ALL, "en_US.UTF-8");
    // wcout.imbue(locale("en_US.UTF-8"));
    // wcin.imbue(locale("en_US.UTF-8"));



    string mess;
    

    cout << "введите сообщение: ";
    
    
    
    string line;
        while(getline(cin, line)){
        mess += line + "\n";

        }
    
    cout << mess << endl;


    
    for(char i: mess){
        cout << i << endl;
    }

    El_gamala(mess);


    return 0;
}

//control d 