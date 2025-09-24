#include <iostream>
#include <string>
using namespace std;

class StackArray{
private:
    static const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int top;
public:
    StackArray(): top(-1) {}
    bool push (int valor){
        if (top >= MAX_SIZE-1){ cout << "Error: Stack overflow Pila llena\n"; return false; }
        array[++top] = valor;
        return true;
    }
    bool pop (){
        if(isEmpty()){return false; }
        --top;
        return true;
    }
    int peek(){
        if (isEmpty()){return -1; }
        return array[top];
    }
    bool isEmpty(){ return (top == -1); }
    int size(){ return top + 1; }
};

bool parentesisBalanceados(const string& expr){
    StackArray pila;

    for(char c : expr){
        if (c == '('){
            if (!pila.push(1)) return false; 
        } else if (c == ')'){
            if (!pila.pop()) return false;   
        }
    
    }
    return pila.isEmpty();
}


int main(){
    string s1 = "(a + b) * (c - d)";      
    string s2 = "((1+2)*(3+4))()";       
    string s3 = ")(1+2(";                
    string s4 = "(1+2)*((3+4)";          

    cout << boolalpha;
    cout << "Esta balanceada \"" << s1 << "\"? " << (parentesisBalanceados(s1) ? "Si" : "No") << "\n";
    cout << "Esta balanceada \"" << s2 << "\"? " << (parentesisBalanceados(s2) ? "Si" : "No") << "\n";
    cout << "Esta balanceada \"" << s3 << "\"? " << (parentesisBalanceados(s3) ? "Si" : "No") << "\n";
    cout << "Esta balanceada \"" << s4 << "\"? " << (parentesisBalanceados(s4) ? "Si" : "No") << "\n";
}
