//Alex Francisco Lovos Argueta u20241471

// Promedio de notas

/*
int main() {
    int notas[5] = {8,9,7,5,10};
    int suma = 0;

    for (int i = 0; i < 5; i++) suma += notas[i];
    
    cout << "El promedio es: " << suma/5 <<endl;

}
*/


#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;
};

//Imprime los valores en la lista
void printList(Node* head){
    Node* curr = head;

    while (curr != nullptr)
    {
        cout << curr->val << " -> ";
        curr = curr->next;
    }

    cout << "nullptr alcanzado" <<endl;
    
}

int main(){
    Node* num1 = new Node{10, nullptr};
    Node* num2 = new Node{15, nullptr};
    Node* num3 = new Node{20, nullptr};
    
    //enlazamos los valores n1 -> n2 -> n3
    num1->next = num2;
    num2->next = num3;

    Node* head = num1;

    cout << "Lista inicial 3 nodos manuales: ";
    printList(head);

    return 0;
}