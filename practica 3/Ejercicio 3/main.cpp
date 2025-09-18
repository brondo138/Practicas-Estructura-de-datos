#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void contarVocalesConsonantes(const char* cadena, int* vocales, int* consonantes) {
    *vocales = 0;
    *consonantes = 0;

    while (*cadena != '\0') {
        char caracter = tolower(*cadena);

        if (isalpha(caracter)) {
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
                (*vocales)++;
            else
                (*consonantes)++;
        }
        cadena++;
    }
}

int main() {
    string texto;
    int vocales, consonantes;

    cout << "Ingrese una frase: ";
    getline(cin, texto);

    contarVocalesConsonantes(texto.c_str(), &vocales, &consonantes);

    cout << "\nResultados:\n";
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;

    return 0;
}
