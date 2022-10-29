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
    
    //Separa cada par de todas as senhas em strings referentes a cada ordem de par
    string pares[6];
    vector<string>::iterator it;
    for(int i=0,j=0; i<6,j<12; i++,j+=2)
        for ( it = _sequencia.begin(); it != _sequencia.end(); it++)
            for (int k = 0; k < 2; k++)
                pares[i]+=(*it)[j+k];

    // Enconta o elemento mais repetido dentro de cada string de pares[]
    // e depois concatena ele a string do resultado final
    char maisRepetido; 
    string resultado;
    for (int i = 0; i < 6; i++){
        int contador[10] = {0};
        int valorMaximo = 0; 
        for (int j = 0; j < pares[i].size(); j++){
            contador[pares[i][j] - '0']++;
            if (valorMaximo < contador[pares[i][j] - '0']) {
                valorMaximo = contador[pares[i][j] - '0'];
                maisRepetido = pares[i][j];
            }
        }
        resultado += maisRepetido;
        resultado += ' ';
    }
    
    return resultado;
}

