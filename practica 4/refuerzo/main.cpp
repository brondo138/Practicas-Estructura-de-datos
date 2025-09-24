//Alex Francisco Lovos Argueta u20241471

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

bool buscar (Node* head, int x){
    for (Node* curr = head; curr != nullptr; curr = curr ->next)
    {
        if(curr->val == x) return true;
    }
    return false;
    
}

void eliminarValor(Node*& head, int x){
    if (head == nullptr) return;

    if (head->val == x)
    {
        Node* tmp = head;
        head = head ->next;
        delete tmp;

        return;
    }
    
    Node* prev = head;
    Node* curr = head ->next;

    while (curr != nullptr)
    {
        if (curr ->val == x)
        {
            prev ->next = curr ->next;
            delete curr;
        }
        prev = curr;
        curr = curr ->next;
    }
    
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
    eliminarValor(head, 10);
    printList(head);

    return 0;
}