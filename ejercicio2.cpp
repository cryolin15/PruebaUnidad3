#include <iostream>
using namespace std;

void mostrarParImpar(int numero) {
    cout << "Números pares hasta " << numero << ": ";
    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "Números impares hasta " << numero << ": ";
    for (int i = 0; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    mostrarParImpar(numero);

    return 0;
}
