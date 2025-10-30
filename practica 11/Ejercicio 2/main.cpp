#include <iostream>
using namespace std;

int sumaArreglo(int arr[], int n) {
    if (n == 1)
        return arr[0];

    return arr[n - 1] + sumaArreglo(arr, n - 1);
}

int main() {
    int arreglo[] = {4, 7, 2, 9, 5};
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "La suma de los elementos es: " << sumaArreglo(arreglo, tamaño) << endl;

    return 0;
}
