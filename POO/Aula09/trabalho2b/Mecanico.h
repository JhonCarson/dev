#ifndef MECANICO_H
#define MECANICO_H

#include <string>
#include "Carro.h"

using namespace std;

class Mecanico {
private:
    string nome;
    float salario;

public:
    Mecanico(const string& nome, float salario);
    ~Mecanico();

    void repararCarro(Carro& carro);
};

#endif 
