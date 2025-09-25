#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo* siguiente;
    Nodo(int val) : dato(val), siguiente(nullptr) {}
};

class Cola{
    Nodo* frente;
    Nodo* final;

    public:
        Cola() : frente(nullptr), final(nullptr) {}

        void encolar(int value){
            Nodo* nuevo = new Nodo(value);

            if(!final){
                frente = final = nuevo;
            }else{
                final -> siguiente = nuevo;
                final = nuevo;
            }
        }

        void desencolar(){
            if (!frente) return;

            Nodo* temp = frente;
            frente = frente ->siguiente;
            delete temp;

            if (!frente) final = nullptr;
        }

        void mostrar(){
            Nodo* temp = frente;
            
            if (temp)
            {
                cout << "Mostrando cola:" <<endl;
                while (temp)
                {
                    cout << temp ->dato << "\n";
                    temp = temp ->siguiente;
                }
            }else{
                cout << "Error: la cola esta vacia" <<endl;
            }
            
            cout <<endl;
        }
};

int main(){
    Cola cola;
    bool condition = true;
    int opcion;
    int dato;

    do
    {
        cout << "\nCola de enteros con nodos enlazado" <<endl;
        cout << "1. Mostrar" <<endl;
        cout << "2. Encolar dato" <<endl;
        cout << "3. Desencolar" <<endl;
        cout << "4. Salir" <<endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cola.mostrar();
            break;
        case 2:

            cout << "Ingrese el dato que desea ingresar a la cola: ";
            cin >> dato;
            cola.encolar(dato);
            cout << "El dato: " << dato <<" fue ingresado de manera exitosa" <<endl;
            break;
        case 3:
            cola.desencolar();
            cout << "Se desencolo el primer valor de manera exitosa" <<endl;
            break;
        case 4:
            cout<<"Saliendo..." <<endl;
            condition = false;
            break;
        default:
            break;
        }
    } while (condition == true);
    
}