#include <iostream>
using namespace std;

int main() {
    int limite;
    cout << "Ingrese el limite para contar numeros pares: ";
    cin >> limite;

    if (limite < 0) {
        cout << "Error: no se permiten numeros negativos" << endl;
        return 1;
    }

    int contador = 0;
    for (int i = 1; i <= limite; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            contador++;
        }
    }
    cout << endl << "Total de numeros pares: " << contador << endl;
    return 0;
}
