#include <iostream>

using namespace std;

struct Nodo
{
    string tarea;
    Nodo* siguiente;
    Nodo(string txt) : tarea(txt), siguiente(nullptr){}
};

class ColaTareas{
    Nodo *frente, *final;

    public:
        ColaTareas() : frente(nullptr), final(nullptr){}

        void agregarTarea(string txt){
            Nodo* nuevo = new Nodo(txt);

            if (!final) frente = final = nuevo;
            else{
                final ->siguiente = nuevo;
                final = nuevo;
            }
        }

        void procesarTarea(){
            if (!frente) cout << "No hay tareas" <<endl;

            cout << "Procesando..." << frente->tarea <<endl;
            Nodo* temp = frente;
            frente = frente ->siguiente;
            delete temp;

            if (!frente) final = nullptr;
        }

        void mostrar(){
            Nodo* t = frente;
            cout << "Tareas en cola" <<endl;

            while (t)
            {
                cout << t ->tarea << "\n";
                t = t ->siguiente;
            }

            cout <<endl;
            
        }
};


int main(){
    ColaTareas tareas;

    tareas.agregarTarea("Realizar la practica 5");
    tareas.agregarTarea("Entregar la practica 5");
    tareas.mostrar();
    tareas.procesarTarea();
    tareas.mostrar();
    tareas.procesarTarea();
    tareas.mostrar();

}