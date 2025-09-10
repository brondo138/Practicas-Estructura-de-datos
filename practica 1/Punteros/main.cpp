//Alex Francisco Lovos Argueta u20241471
#include <iostream>
using namespace std;

int main(){
    //punteros
    int numero = 100;
    int* puntero = &numero;

    cout << "Valor de la variable: " << numero << endl;
    cout << "Direccion de la variable: " << &numero <<endl;
    cout << "Valor del puntero (Direccion): " << puntero << endl;
    cout << "Valor del puntero (Direccion): " << *puntero << endl;

    *puntero = 200;

    cout << "Nuevo valor del puntero/variable" << numero <<endl;
    return 0;
}