//Alex Francisco Lovos Argueta u20241471
#include<iostream>

using namespace std;

int main (){
    //Mostrar Array
    int numeros[6] = {1,2,3,4,5,6};

    cout << "Numeros: ";

    for (int i = 0; i < 6; i++) cout << numeros[i] << " ";

    cout << endl;

    // Suma y promedio
    float valores[4] = {2.1,5.4,10.5,6.3};

    float suma, prom;
    
    for (int i = 0; i < 4; i++) suma += valores[i];    

    prom = suma/4;

    cout << "La suma de los numeros flotantes es: " << suma <<endl;
    cout << "El promedio de los numeros flotantes es: " << prom <<endl;

    //Maximo
    int arr[7] = {4,5,7,1,3,2,6};
    int maximo = arr[0];

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > maximo)
        {
            maximo = arr[i];
        }
    }
    
    cout << "El valor maximo es: "<< maximo <<endl;

    //Contar Pares

    int array[7] = {2, 5, 8, 11, 14, 17, 20};
    int contador = 0;

    for (int i = 0; i < 7; i++) {
        if (array[i] % 2 == 0) {
            contador++;
        }
    }

    cout << "Cantidad de números pares: " << contador << endl;

    //Insertar en posicion

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int pos = 2;
    int x = 11;


    for (int i = 9; i > pos; i--) {
        a[i] = a[i-1];
    }


    a[pos] = x;


    cout << "Array después de insertar: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
    
}