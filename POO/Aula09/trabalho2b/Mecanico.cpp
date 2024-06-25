#include <iostream>
#include "Mecanico.h"

using namespace std;

Mecanico::Mecanico(const string& nome, float salario)
    : nome(nome), salario(salario) {}

Mecanico::~Mecanico() {}

void Mecanico::repararCarro(Carro& carro) {
    
    cout << "Reparando carro: " << carro.getMarca() << " " << carro.getModelo() << endl << endl;
    
    cout << "Realizando a troca de óleo do carro..." << endl << endl;
    
    cout << "Troca de óleo concluída." << endl << endl;
    
}
