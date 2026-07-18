#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1;
    cout << "Ingrese un numero N: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: no se permiten numeros negativos" << endl;
        return 1;
    }

    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "La suma de 1 a " << n << " es: " << suma << endl;
    return 0;
}
