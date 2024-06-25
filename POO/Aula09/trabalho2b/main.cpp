#include <iostream>
#include "Oficina.h"
#include "Mecanico.h"
#include "Motorista.h"

using namespace std;


int main() {
    // Criar Oficina
    Oficina oficina("Oficina do Claudiao", "Rua Tancredo Neves, 1557");

    // Criar carro com motorzao
    Motor motorCarro1("Alcool", 1.6);
    Carro carro1("Chevrollet", "Chevette", motorCarro1);

    Motor motorCarro2("Diesel", 2.5);
    Carro carro2("Ford", "Ranger", motorCarro2);

    // Adicionar carro a oficina do claudiao
    oficina.adicionarCarro(carro1);
    oficina.adicionarCarro(carro2);

    // Criar mecanico e motorista
    Mecanico mecanico("Claudiao", 6500.00);
    Motorista motorista("Jhomany", 24);

    // criar servico de troca de oleo
    oficina.realizarServicoTrocaDeOleo();

    //dirigir o carro pra ir embora
    motorista.dirigirCarro(carro1);

    return 0;
}
