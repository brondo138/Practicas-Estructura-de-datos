#include <iostream>
using namespace std;

int main(){
     //Aritmetica de punteros
    int numeros[] = {10, 20, 30, 40, 50};
    int* ptr = numeros; //Apunta al primer elemento
    cout << "Recorriendo el array con punteros \n" <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento: " << i << ": " << *(ptr + i)<< endl;
    }
    
    ptr++;
    cout << "Despues de ptr++ el puntero apuntara a : "<< *ptr <<endl;
    return 0;
}