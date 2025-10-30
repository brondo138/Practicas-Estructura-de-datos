#include <iostream>
using namespace std;

void decimalBinario(int n) {
    if (n == 0 || n == 1) {
        cout << n;
        return;
    }

    decimalBinario(n / 2);

    cout << n % 2;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    cout << "Binario: ";
    decimalBinario(numero);
    cout << endl;

    return 0;
}
