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

            while (temp)
            {
                cout << temp ->dato << "\n";
                temp = temp ->siguiente;
            }
            
            cout <<endl;
        }
};

int main(){
    Cola c;
    c.encolar(10);
    c.encolar(20);
    c.encolar(30);
    c.mostrar();
    c.desencolar();
    c.mostrar();
}