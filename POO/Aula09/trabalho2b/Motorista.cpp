#include <iostream>
#include "Motorista.h"

using namespace std;

Motorista::Motorista(const string& nome, int idade)
    : nome(nome), idade(idade) {}

Motorista::~Motorista() {}

void Motorista::dirigirCarro(Carro& carro) {
    cout << "Dirigindo carro: " << carro.getMarca() << " " << carro.getModelo() << endl << endl;
    carro.ligar(); // Ligar o carro
    carro.avancar(); // Avançar com o carro
    carro.desligar(); // Desligar o carro

    cout << "Viagem concluída." << endl << endl;
}
