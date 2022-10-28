#ifndef INTRUSO_HPP
#define INTRUSO_HPP

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Intruso{
    private:
        list<string> _sequencia; 

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};

#endif