#include <iostream>
#include <cstring>
using namespace std;

bool esPalindromo(const char *palabra) {
    int longitud = strlen(palabra);
    int i = 0;
    int j = longitud - 1;

    while (i < j) {
        if (palabra[i] != palabra[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    const int TAM_MAX = 100;
    char palabra[TAM_MAX];

    cout << "Por favor ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra)) {
        cout << "La palabra que usted ingresó es un palíndromo." << endl;
    } else {
        cout << "La palabra que usted ingresó no es un palíndromo." << endl;
    }

    return 0;
}
