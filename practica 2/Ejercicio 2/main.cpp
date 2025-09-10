//Alex Francisco Lovos Argueta u20241471
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

bool buscar(Node* head, int x) {
    Node* temp = head;  
    while (temp != nullptr) {
        if (temp->val == x) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void eliminarValor(Node*& head, int x) {
    if (head == nullptr) return;


    if (head->val == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }


    Node* curr = head;
    while (curr->next != nullptr && curr->next->val != x) {
        curr = curr->next;
    }


    if (curr->next != nullptr) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
}


int main() {

    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};


    n1->next = n2;
    n2->next = n3;

    Node* head = n1;

    cout << "Lista inicial: ";
    printList(head);


    int x = 20;
    cout << "Existe el dato " << x << "? " << (buscar(head, x) ? "Sí" : "No") << endl;


    eliminarValor(head, 20);

    cout << "Lista después de eliminar " << x << ": ";
    printList(head);

    return 0;
}
