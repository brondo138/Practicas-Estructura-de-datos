#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
using namespace std;

class StackArray {
private:
    static const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int top;

public:
    StackArray() : top(-1) {}

    bool push(int valor) {
        if (top >= MAX_SIZE - 1) {
            cout << "Error: Stack overflow (pila llena)\n";
            return false;
        }
        array[++top] = valor;
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            return false;
        }
        --top;
        return true;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return array[top];
    }

    bool isEmpty() {
        return (top == -1);
    }

    int size() {
        return top + 1;
    }
};


static bool esEntero(const string& s) {
    if (s.empty()) return false;
    size_t i = 0;
    if (s[0] == '-') {
        if (s.size() == 1) return false;
        i = 1;
    }
    for (; i < s.size(); ++i) if (!isdigit((unsigned char)s[i])) return false;
    return true;
}


bool evaluarPostfijo(const string& expr, int& resultado) {
    StackArray pila;
    istringstream iss(expr);
    string tok;

    while (iss >> tok) {
        if (esEntero(tok)) {
            int val = stoi(tok);
            if (!pila.push(val)) return false;
        } else if (tok.size() == 1 && (tok[0]=='+' || tok[0]=='-' || tok[0]=='*' || tok[0]=='/')) {
            if (pila.size() < 2) {
                cout << "Error: faltan operandos para el operador '" << tok << "'\n";
                return false;
            }
            int b = pila.peek(); pila.pop();
            int a = pila.peek(); pila.pop();

            int r = 0;
            switch (tok[0]) {
                case '+': r = a + b; break;
                case '-': r = a - b; break;
                case '*': r = a * b; break;
                case '/':
                    if (b == 0) {
                        cout << "Error: división por cero\n";
                        return false;
                    }
                    r = a / b; break;
            }
            pila.push(r);
        } else {
            cout << "Error: token inválido '" << tok << "'\n";
            return false;
        }
    }

    if (pila.size() != 1) {
        cout << "Error: expresión inválida, la pila terminó con " << pila.size() << " elementos\n";
        return false;
    }
    resultado = pila.peek();
    return true;
}


int main() {
    cout << "CALCULADORA DE EXPRESIONES POSTFIJAS\n";
    cout << "Ejemplo de entrada: 3 4 + 2 *\n";
    cout << "Escribe una expresión en notación postfija: ";

    string expr;
    getline(cin, expr);

    int res;
    if (evaluarPostfijo(expr, res)) {
        cout << "Resultado = " << res << endl;
    } else {
        cout << "No se pudo evaluar la expresión.\n";
    }
    return 0;
}
