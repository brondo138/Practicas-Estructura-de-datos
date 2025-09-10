//Alex Francisco Lovos Argueta u20241471
#include <iostream>

using namespace std;

int main(){
     //Memoria

    int edad = 23;
    float pi = 3.1415f;
    char inicial = 'A';
    string nombre = "Alex";
    bool estudiante = false;
    cout << "Tamanio del tipo int: " << sizeof(edad) << " Bytes" <<endl;
    cout << "Tamanio del tipo float: " << sizeof(pi) << " Bytes" <<endl;
    cout << "Tamanio del tipo string: " << sizeof(nombre) << " Bytes" <<endl;
    cout << "Tamanio del tipo char: " << sizeof(inicial) << " Bytes" <<endl;
    cout << "Tamanio del tipo bool: " << sizeof(estudiante) << " Bytes" <<endl;
    return 0;
}