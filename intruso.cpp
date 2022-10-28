#include <iostream>
#include <algorithm>
#include "intruso.hpp"


void Intruso::set_senha_vazada (string vazou){
    // Remove os espaços da string
    vazou.erase(std::remove(vazou.begin(), vazou.end(), ' '), vazou.end());

    // Organiza as entradas em uma matriz
    char entrada[5][2];    
    for (int i = 0, k= 0; i < 5; i++, k+=2){      
        entrada[i][0] = vazou[k];
        entrada[i][1] = vazou[k+1];
    }

    // Salva de acordo com sequência que o usuário digitou em uma string auxiliar
    string senha;
    for (int i = 10 ; i < vazou.size(); i++){
        senha += entrada[vazou[i] - 65][0];
        senha += entrada[vazou[i] - 65][1];
    }

    // Adiciona a sequência no vetor
    _sequencia.push_back(senha);
}

string Intruso::crack_senha(){
/*
for(int i=0; i < 12; i=i+2)


*/   
    return;
}
