#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> cola;
    bool activo = true;
    int opcion;
    string tarea;

    do {
        cout << "\n--- Simulador de Impresora ---\n";
        cout << "1. Agregar tarea\n";
        cout << "2. Procesar tarea\n";
        cout << "3. Mostrar tareas pendientes\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore(); 

        switch (opcion) {
        case 1:
            cout << "Ingrese el nombre de la tarea: ";
            getline(cin, tarea);
            cola.push(tarea);
            cout << "Tarea '" << tarea << "' agregada correctamente\n";
            break;
        case 2:
            if (cola.empty()) {
                cout << "No hay tareas pendientes\n";
            } else {
                cout << "Procesando tarea: " << cola.front() << endl;
                cola.pop();
            }
            break;
        case 3:
            if (cola.empty()) {
                cout << "No hay tareas en cola\n";
            } else {
                queue<string> temp = cola;
                cout << "Tareas pendientes:\n";
                while (!temp.empty()) {
                    cout << "- " << temp.front() << endl;
                    temp.pop();
                }
            }
            break;
        case 4:
            cout << "Saliendo del simulador..." << endl;
            activo = false;
            break;
        default:
            cout << "Opcion invalida\n";
            break;
        }
    } while (activo);

    return 0;
}
