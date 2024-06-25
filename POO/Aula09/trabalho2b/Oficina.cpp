#include "Oficina.h"

using namespace std;

Oficina::Oficina(const string& nome, const string& endereco)
    : nome(nome), endereco(endereco) {}

Oficina::~Oficina() {}

void Oficina::adicionarCarro(const Carro& carro) {
    veiculosNaOficina.push_back(carro);
}

void Oficina::adicionarMecanico(const Mecanico& mecanico) {
    mecanicos.push_back(mecanico);
}

int Oficina::quantidadeMecanicos() const{

    return mecanicos.size();
}

void Oficina::realizarServicoTrocaDeOleo() {

    if (quantidadeMecanicos() < 0) {
      
        cout << "Não há mecânicos disponíveis para realizar o serviço." << endl;
        return;
    }

    cout << endl << "Iniciando serviço de troca de óleo na oficina: " << nome << endl << endl;

    for (auto& carro : veiculosNaOficina) {
        mecanicos[0].repararCarro(carro);
    }
}
