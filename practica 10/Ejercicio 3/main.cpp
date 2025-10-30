#include <iostream>
using namespace std;

int contarDigitos(int n) {

    if (n < 10)
        return 1;

    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    cout << "El numero tiene " << contarDigitos(numero) << " digitos." << endl;

    return 0;
}
