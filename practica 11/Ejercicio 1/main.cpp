#include <iostream>
using namespace std;

int invertirNumero(int n, int invertido = 0) {

    if (n == 0)
        return invertido;

    int ultimo = n % 10;
    invertido = invertido * 10 + ultimo;

    return invertirNumero(n / 10, invertido);
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << "Numero invertido: " << invertirNumero(numero) << endl;
    return 0;
}
