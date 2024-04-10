#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    
    float num[2];

    cout << endl;

    for (int i = 1; i < 3; i++){

        cout << "Informe o numero " << i << ": ";   
        cin >> num[i-1];
    }

    cout << endl;

    //Multiplicação:

    float res_mult = 0;

    res_mult = num[0] * num [1];

    cout << "Multiplicação desses números: " << res_mult << endl;

    //Subtração:

    float res_sub = 0;

    res_sub = num[0] - num [1];

    cout << "Subtração desses números: " << res_sub << endl;

    //Soma:

    float res_som = 0;

    res_som = num[0] + num [1];

    cout << "Soma desses números: " << res_som << endl;

    //Divisão:

    float res_div = 0;

    res_div = num[0] / num [1];

    cout << "Divisão desses números: " << res_div << endl;

    cout << endl;
    cout << " ";

    return 0;
}
