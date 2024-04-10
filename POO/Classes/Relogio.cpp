#include <iostream>
#include <stdlib.h>

using namespace std;

class Relogio {

private:

    int hora, min, seg; // atributos da classe relógio

    // métodos privados da classe relógio
    bool validarHora();
    bool validarMin();
    bool validarSeg();

public:

    //métodos publicos da classe
    void receberHorario();
    void mostrarHorario();

    void aumentarHora();
    void aumentarMinuto();
    void aumentarSegundo();

    void diminuirHora();
    void diminuirMinuto();
    void diminuirSegundo();

    void menu();
};

// método para validar o valor informado em hora
bool Relogio::validarHora() {

    if((hora >= 0) && (hora < 24)){   //verifica se o valor está dentro intervalo correto
        
        return true;
    }
    else{ 

        cout << "hora inválida" << endl << endl;
        return false;
    }
}

// método para validar o valor informado em minuto
bool Relogio::validarMin() {

    if((min >= 0) && (min < 60)){   //verifica se o valor está dentro intervalo correto
        
        return true;
    }
    else{

        cout << "minuto inválido" << endl << endl;
        return false;
    }
}

// método para validar o valor informado em segundo
bool Relogio::validarSeg(){

    if((seg >= 0) && (seg < 60)){   //verifica se o valor está dentro intervalo correto
        
        return true;
    }
    else {

        cout << "segundo invalido" << endl << endl;
        return false;
    }
}

// método para receber os valores pelo teclado do usuario
void Relogio::receberHorario(){
   
    do{

        cout << endl<< "Informe a hora:  ";
        cin >> hora; 
        cout << endl << "Informe o minuto: "; 
        cin >> min; 
        cout << endl << "Informe o Segundo: "; 
        cin >> seg ;
    }
    while(validarHora() == false || validarMin() == false || validarSeg() == false);
}

void Relogio::aumentarHora() {

    hora++;
    if (hora > 23) {
        
        hora = 00;
    }
    
}

void Relogio::aumentarMinuto(){

    min++;
    if(min > 59){

        aumentarHora();
        min = 00;
    }
}

void Relogio::aumentarSegundo() {

    seg++;
    if(seg > 59){

        aumentarMinuto();
        seg = 00;
    }
}

void Relogio::diminuirHora(){

    hora--;
    if(hora < 0) {

        hora = 23;
    }
}

void Relogio::diminuirMinuto(){

    min--;
    if(min < 0) {

        diminuirHora();
        min = 59;
    }
}

void Relogio::diminuirSegundo() {

    seg--;
    if(seg < 0) {

        diminuirMinuto();
        seg = 59;
    }
}

void Relogio::mostrarHorario(){

    cout << hora << ":" << min << ":" << seg;
}

void Relogio::menu(){

    int escolha;

    do{

        cout << "(1) - Informe o horario (hora, minuto, segundo)" << endl;
        cout << "(2) - Aumentar a hora" << endl;
        cout << "(3) - Aumentar o minuto" << endl;
        cout << "(4) - Aumentar o segundo" << endl;
        cout << "(5) - Dimunuir a hora" << endl;
        cout << "(6) - Diminuir o minuto" << endl;
        cout << "(7) - Diminuir o segundo" << endl;
        cout << "(8) - Mostrar a hora" << endl;
        cout << "(9) - Sair" << endl;
        cout << "Informe sua escolha: ";
        cin >> escolha;
        cout << endl;

        switch(escolha){
            case 1:
            {
                receberHorario();
                break;
            }
            case 2:
            {
                aumentarHora();
                break;
            }
            case 3:
            {
                aumentarMinuto();
                break;
            }
            case 4:
            {
                aumentarSegundo();
                break;
            }
            case 5:
            {
                diminuirHora();
                break;
            }
            case 6:
            {
                diminuirMinuto();
                break;
            }
            case 7:
            {
                diminuirSegundo();
                break;
            }
            case 8:
            {
                mostrarHorario();
                break;
            }
            default:
                cout << "Valor invalido" << endl << endl;

        }
    }
    while(escolha != 9);
}

int main() {

    Relogio rel;

    rel.menu();

    return 0;
}