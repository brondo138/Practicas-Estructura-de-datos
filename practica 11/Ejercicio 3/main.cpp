#include <iostream>
using namespace std;

string invertirCadena(string cadena) {
    if (cadena.length() <= 1)
        return cadena;

    return invertirCadena(cadena.substr(1)) + cadena[0];
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    cout << "Cadena invertida: " << invertirCadena(texto) << endl;

    return 0;
}
