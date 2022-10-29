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
    string crack,crackfinal;
    //Separa cada par de todas as senhas em strings referentes a cada ordem de par
    string pares[6];
    vector<string>::iterator it;
    for(int i=0,j=0; i<6,j<12; i++,j+=2)
        for ( it = _sequencia.begin(); it != _sequencia.end(); it++)
            for (int k = 0; k < 2; k++)
                pares[i]+=(*it)[j+k];

                    
                
                
    
 /*   // Exclui string iguais
    list<string>::iterator it1, it2;
    for (it1 = _sequencia.begin(); it1 != _sequencia.end(); it1++)
        for (it2 = _sequencia.begin(); it2 != _sequencia.end(); it2++){
            if (it1 == it2)
                continue;
            else if (*it1 == *it2){
                _sequencia.erase(it2);
                break;
            }
        } */

    // Compara os pares
    /* for(int i=0; i < 12; i=i+2)
        for(int j=i; j <= i+1; j++)
            for(int k=i; k <= i+1; k++)
                if(_sequencia.front()[j]==_sequencia.back()[k]){
                    crack += _sequencia.front()[j];
                } */
            
    //Espaça a senha
    int m=0,n=0; 
     while(m<11 && n<6)
     {
        crackfinal[m]=crack[n];
        crackfinal[m+1]=' ';
        n++;
        m=m+2;
     }
        
   

    return crackfinal;
}

