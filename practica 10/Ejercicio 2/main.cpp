#include <iostream>
using namespace std;

int producto(int a, int b) {

    if (a == 0 || b == 0)
        return 0;

    return a + producto(a, b - 1);
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Resultado: " << producto(num1, num2) << endl;

    return 0;
}
