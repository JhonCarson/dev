#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    
    float num[2];

    for (int i = 1; i < 3; i++){

        cout << endl;
        cout << "Informe o numero " << i << ": ";   
        cin >> num[i-1];

    }

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

    return 0;
}