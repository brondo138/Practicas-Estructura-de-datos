#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> cola;
    stack<int> pila;

    int n, valor;
    cout << "Cuantos valores desea ingresar: ";
    cin >> n;

    cout << "Ingrese los valores:\n";
    for (int i = 0; i < n; i++) {
        cin >> valor;
        cola.push(valor);
    }

    while (!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }

    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    cout << "Valores en orden invertido: ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;

    return 0;
}