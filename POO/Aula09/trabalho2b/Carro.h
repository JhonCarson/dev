#ifndef CARRO_H
#define CARRO_H

#include <string>
#include "Motor.h"

using namespace std;

class Carro {
private:
    string marca;
    string modelo;
    Motor motor;
    bool ligado;

public:
    Carro(const string& marca, const string& modelo, const Motor& motor);
    ~Carro();

    void setMarca(const string& marca);
    void setModelo(const string& modelo);
    
    static int getProximoID();
    int getId() const;
    
    string getMarca() const;
    string getModelo() const;

    void realizarTrocaDeOleo();
    void ligar();
    void desligar();
    void avancar();
};

#endif
