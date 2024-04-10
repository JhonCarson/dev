#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    
    float num[2];

    Inicio:

    for (int i = 1; i < 3; i++){

        cout << endl;
        cout << "Informe o numero " << i << ": ";   
        cin >> num[i-1];
    }

    cout << endl;

    if (num[0] > num[1]){

        cout << "O maior número foi o primeiro informado: " << num[0] << endl;
    }
    else if (num[1] > num[0]) {

        cout << "O maior número foi o segundo informado: " << num[1] << endl;
    }
    else {

        cout << "Os números são iguais." << endl;
    }

    cout << endl;

    char res;

    do {
        cout << "Deseja realizar a comparação novamente? (Y/N)" << endl << endl;
        cin >> res;
        system("clear");
        cout << res << endl;
    }
    while (res != 'Y' && res != 'y' && res != 'N' && res != 'n' );

    if (res == 'Y' || res == 'y') {
        
        goto Inicio;
    }
    

    cout << endl;

    return 0;
}