#ifndef OFICINA_H
#define OFICINA_H

#include <iostream>
#include <vector>
#include "Carro.h"
#include "Mecanico.h"

using namespace std;

class Oficina {
private:
    string nome;
    string endereco;
    vector<Carro> veiculosNaOficina;
    vector<Mecanico> mecanicos;

public:
    Oficina(const string& nome, const string& endereco);
    ~Oficina();

    void adicionarCarro(const Carro& carro);
    void adicionarMecanico(const Mecanico& mecanico);
    void realizarServicoTrocaDeOleo();
    int quantidadeMecanicos() const;
};

#endif
