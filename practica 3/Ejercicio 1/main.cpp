#include <iostream>
using namespace std;

// Funciones con punteros
void sumar(float* a, float* b, float* resultado) {
    *resultado = *a + *b;
}

void restar(float* a, float* b, float* resultado) {
    *resultado = *a - *b;
}

void multiplicar(float* a, float* b, float* resultado) {
    *resultado = (*a) * (*b);
}

void dividir(float* a, float* b, float* resultado) {
    if (*b != 0) {
        *resultado = (*a) / (*b);
    } else {
        cout << "Error: División entre cero." << endl;
        *resultado = 0;
    }
}

int main() {
    float num1, num2, resultado;
    int opcion;

    cout << "Calculadora Basica" << endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "\nOperaciones disponibles:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            sumar(&num1, &num2, &resultado);
            cout << "Resultado de la suma: " << resultado << endl;
            break;
        case 2:
            restar(&num1, &num2, &resultado);
            cout << "Resultado de la resta: " << resultado << endl;
            break;
        case 3:
            multiplicar(&num1, &num2, &resultado);
            cout << "Resultado de la multiplicación: " << resultado << endl;
            break;
        case 4:
            dividir(&num1, &num2, &resultado);
            cout << "Resultado de la división: " << resultado << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}
