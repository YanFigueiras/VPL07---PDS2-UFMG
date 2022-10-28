#include <iostream>
#include <algorithm>
#include "intruso.hpp"


void Intruso::set_senha_vazada (string vazou){

    // Remove os espaços da string
    vazou.erase(std::remove(vazou.begin(), vazou.end(), ' '), vazou.end());

    char entrada[5][2];
    int k = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 2; j++){
            entrada[i][j] = vazou[j + k];
        }
    }
}

string Intruso::crack_senha(){
/*
for(int i=0; i < 12; i=i+2)


*/   
    return;
}
