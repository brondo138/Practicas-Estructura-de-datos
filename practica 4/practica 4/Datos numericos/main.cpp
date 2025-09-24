#include <iostream>
using namespace std;

class StackArray{
    private:
        static const int MAX_SIZE = 100;

        int array[MAX_SIZE];
        int top;

    public:
        StackArray(){
            top = -1;
        };
    
    bool push (int valor){
        if (top >= 100-1)
        {
            cout << "Error: Stack overflow Pilla llena";
            return false;
        }
        array[++ top] = valor;
        cout << "Elemento: " << valor << " Agregado exitosamente" <<endl;
        return true;
    }

    bool pop (){
        if(isEmpty()){
            cout << "Error: Stack underflow Pilla vacia";
            return -1;
        }

        int valorEliminado = array[top--];
        cout << "Elemento: " << valorEliminado << ". Eliminado exitosamente" <<endl;
        return true;
    }
    int peek(){
        if (isEmpty())
        {
            cout << "Error: Stack underflow Pilla vacia";
            return -1;
        }
        return array[top];
        
    }

    bool isEmpty(){
        return (top == -1);
    }

    int size(){
        return top +1;
    }
};

int main(){
    StackArray pila;

    cout << "DEMOSTRACION DE PILA " <<endl;

    cout << "Estado de la Pila: " << (pila.isEmpty() ? "Vacia" : "Con datos") << endl;
    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.push(40);
    pila.push(200);

    cout << "Tamanio: " << pila.size() <<endl;
    cout << "Tope: " << pila.peek() <<endl;
    
    pila.pop();
    pila.pop();

    cout << "Tamanio: " << pila.size() <<endl;
    cout << "Nuevo Tope: " << pila.peek() <<endl;

}