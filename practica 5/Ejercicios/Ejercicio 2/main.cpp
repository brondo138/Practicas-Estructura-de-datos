#include <iostream>
#include <queue>
using namespace std;

class Cola {
private:
    queue<int> q;

public:
    void mostrar() {
        if (q.empty()) {
            cout << "La cola esta vacia" << endl;
            return;
        }
        queue<int> temp = q;
        cout << "Elementos en la cola: ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

    void encolar(int dato) {
        q.push(dato);
    }

    void desencolar() {
        if (q.empty()) {
            cout << "La cola esta vacia" << endl;
            return;
        }
        q.pop();
    }
};

int main() {
    Cola cola;
    bool condition = true;
    int opcion;
    int dato;

    do {
        cout << "\nCola de enteros con std::queue" << endl;
        cout << "1. Mostrar" << endl;
        cout << "2. Encolar dato" << endl;
        cout << "3. Desencolar" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cola.mostrar();
            break;
        case 2:
            cout << "Ingrese el dato que desea ingresar a la cola: ";
            cin >> dato;
            cola.encolar(dato);
            cout << "El dato: " << dato << " fue ingresado de manera exitosa" << endl;
            break;
        case 3:
            cola.desencolar();
            cout << "Se desencolo el primer valor de manera exitosa" << endl;
            break;
        case 4:
            cout << "Saliendo..." << endl;
            condition = false;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (condition);

    return 0;
}
