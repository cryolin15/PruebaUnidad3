#include <iostream>
using namespace std;

int calcularSuma(int arreglo[], int longitud) {
    int suma = 0;

    for (int i = 0; i < longitud; i++) {
        suma += arreglo[i];
    }

    return suma;
}

int main() {
    int longitud;

    cout << "Ingrese la longitud del arreglo: ";
    cin >> longitud;

    if (longitud <= 0) {
        cout << "El arreglo está vacío." << endl;
        return 0;
    }

    int arreglo[longitud];

    cout << "Ingrese los elementos del arreglo: ";
    for (int i = 0; i < longitud; i++) {
        cin >> arreglo[i];
    }

    int suma = calcularSuma(arreglo, longitud);

    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}