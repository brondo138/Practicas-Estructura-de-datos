#include <iostream>
#include <cctype>  
using namespace std;

int contarVocales(string cadena) {

    if (cadena.length() == 0)
        return 0;

    char c = tolower(cadena[0]);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1 + contarVocales(cadena.substr(1));  
    else
        return contarVocales(cadena.substr(1));  
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    cout << "Cantidad de vocales: " << contarVocales(texto) << endl;

    return 0;
}
