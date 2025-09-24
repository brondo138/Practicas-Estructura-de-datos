#include <iostream>
using namespace std;

class StackArray{
    private:
        static const int MAX_SIZE = 100;

        string array[MAX_SIZE];
        int top;

    public:
        StackArray(){
            top = -1;
        };
    
    bool push (string url){
        if (top >= 100-1)
        {
            cout << "Error: Historial lleno";
            return false;
        }
        array[++ top] = url;
        cout << "Sitio: \"" << url << "\" Agregado exitosamente" <<endl;
        return true;
    }

    bool pop (){
        if(isEmpty()){
            cout << "Error: Historial vacio";
            return false;
        }

        string valorEliminado = array[top--];
        cout << "Sitio: \"" << valorEliminado << "\" Eliminado exitosamente" <<endl;
        return true;
    }

    bool clear(){
        if(isEmpty()){
            cout << "Error: Historial vacio" <<endl;
            return false;
        }
        top = -1;
        cout << "Historial eliminado completamente" <<endl;
        return true;
    }

    string peek(){
        if (isEmpty())
        {
            cout << "Error: Historial vacio";
            return "";
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
    StackArray historial;
    bool validation = true;
    int opcion;
    string url;
    do
    {
        cout << "Historial de navegacion" <<endl;
        cout << "1. Ver tamanio del historial" <<endl;
        cout << "2. Ver ultima pagina visitada" <<endl;
        cout << "3. Registrar pagina visitada" <<endl;
        cout << "4. Eliminar ultima pagina visitada" <<endl;
        cout << "5. Eliminar toda el historial de navegacion" <<endl;
        cout << "6. Salir" <<endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            cout << "El tamanio del historial registrado es: " << historial.size() <<endl;
            break;
        case 2:
            cout << "Ultima pagina visitada: " << historial.peek() <<endl;
            break;
        case 3:
            cout << "Ingresa la url que deseas registrar:  ";
            cin >> url;
            historial.push(url);
            break;
        case 4:
            historial.pop();
            break;
        case 5:
            historial.clear();
            break;
        case 6:
            cout << "Saliendo...";
            validation = false;
            break;
        default:
        cout << "Error: Ingrese una opcion valida" <<endl;
            break;
        }
    } while (validation == true);
}