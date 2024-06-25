#include <iostream>
#include "Carro.h"

using namespace std;

Carro::Carro(const string& marca, const string& modelo, const Motor& motor)
    : marca(marca), modelo(modelo), motor(motor) {}

Carro::~Carro() {}

void Carro::setMarca(const string& marca) {
    this->marca = marca;
}

void Carro::setModelo(const string& modelo) {
    this->modelo = modelo;
}

string Carro::getMarca() const {
    return marca;
}

string Carro::getModelo() const {
    return modelo;
}

void Carro::ligar() {
    if (!ligado) {
        ligado = true;
        cout << "Carro ligado." << endl << endl;
    } else {
        cout << "O carro já está ligado." << endl << endl;
    }
}

void Carro::desligar() {
    if (ligado) {
        ligado = false;
        cout << "Carro desligado." << endl << endl;
    } else {
        cout << "O carro já está desligado." << endl << endl;
    }
}

void Carro::avancar() {
    if (ligado) {
        cout << "Carro avançando..." << endl << endl;
    } else {
        cout << "Não é possível avançar, o carro está desligado." << endl << endl;
    }
}

