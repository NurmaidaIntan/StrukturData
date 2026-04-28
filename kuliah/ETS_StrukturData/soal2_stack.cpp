//Nama        : Nurmaida Intan Permadani  
//NRP         : 5025251040  
//Mata Kuliah : Struktur Data 
//Topik       : Stack    

#include <iostream>
#include <string>
using namespace std;

// Struktur Node (Double Linked List)
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class Stack {
private:
    Node* top;

public:
    // Constructor
    Stack() {
        top = NULL;
    }

    // Push (tambah data)
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        newNode->prev = NULL;

        if (top != NULL) {
            top->prev = newNode;
        }

        top = newNode;

        cout << x << " ditambahkan ke stack\n";
    }

    // Pop (hapus data)
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        cout << temp->data << " dihapus dari stack\n";

        top = top->next;

        if (top != NULL) {
            top->prev = NULL;
        }

        delete temp;
    }

    // Peek (lihat data teratas)
    void peek() {
        if (top == NULL) {
            cout << "Stack kosong\n";
        } else {
            cout << "Elemen teratas: " << top->data << endl;
        }
    }

    // Cek kosong
    bool isEmpty() {
        return (top == NULL);
    }
};

int main() {
    Stack s;

    for(int i = 0; i < 3; i++){
        string command;
        cin >> command;

        if(command == "push") {
            int n;
            cin >> n;

            s.push(n);
        }

        else if(command == "pop") {
            if(!s.isEmpty()) s.pop();
        }
    }

    return 0;
}