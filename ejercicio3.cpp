#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    cout << "Contando del 1 al 20, solo numeros pares:" << endl;
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            contador++;
        }
    }
    cout << endl << "Total de numeros pares: " << contador << endl;
    return 0;
}
