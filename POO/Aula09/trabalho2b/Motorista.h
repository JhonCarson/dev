#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <string>
#include "Carro.h"

using namespace std;

class Motorista {
private:
    string nome;
    int idade;

public:
    Motorista(const string& nome, int idade);
    ~Motorista();

    void dirigirCarro(Carro& carro);
};

#endif
