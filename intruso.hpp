#ifndef INTRUSO_HPP
#define INTRUSO_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Intruso{
    private:
        vector<string> _sequencia; 

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};

#endif