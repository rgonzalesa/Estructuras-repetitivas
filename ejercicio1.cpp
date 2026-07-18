#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: no se permiten numeros negativos" << endl;
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
