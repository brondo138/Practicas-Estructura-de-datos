#include <iostream>
using namespace std;

int potencia(int base, int exponente) {

    // Caso base: cualquier número elevado a 0 es 1
    if (exponente == 0)
        return 1;

    // Caso recursivo: base^exponente = base * base^(exponente - 1)
    return base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << base << "^" << exponente << " = " << potencia(base, exponente) << endl;

    return 0;
}
