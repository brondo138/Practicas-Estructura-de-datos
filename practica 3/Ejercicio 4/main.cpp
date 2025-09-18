#include <iostream>
#include <cctype> 
using namespace std;

int contarVocales(const char* cadena) {
    int contador = 0;

    while (*cadena != '\0') { 
        char caracter = tolower(*cadena); 

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contador++;
        }

        cadena++; 
    }

    return contador;
}

int main() {
    string texto;

    cout << "Ingrese una frase: ";
    getline(cin, texto);

    int totalVocales = contarVocales(texto.c_str());

    cout << "\nLa frase contiene " << totalVocales << " vocal(es)." << endl;

    return 0;
}
