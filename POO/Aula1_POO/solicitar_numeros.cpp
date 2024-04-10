#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    
    float num[2];

    for (int i = 1; i < 3; i++){

        cout << endl;
        cout << "Informe o numero " << i << ": ";   
        cin >> num[i-1];
        cout << endl;
    }

    for (int i = 0; i < 2; i++){

        cout << num[i];
        cout << " ";
    }

    cout << endl;
    cout << " ";

    return 0;
}
