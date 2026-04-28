Nama        : Nurmaida Intan Permadani  

NRP         : 5025251040  

Mata Kuliah : Struktur Data  


## Soal 1

Struktur data array adalah salah satu struktur data paling dasar yang digunakan untuk menyimpan sekumpulan data dengan tipe data yang sama dalam satu wadah

Kegunaan array :
1. menyimpan data dalam jumlah banyak
2. perhitungan atau algoritma (sorting dan searching)
3. representasi matriks 
4. implementasi struktur data lain (stack, queue, vector, list)

Contoh penggunaan dalam aplikasi nyata :
Struktur data array dapat diimplementasikan dalam aplikasi untuk mengolah nilai mahasiswa


## Soal 2

```bash
#include <iostream>
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

    s.push(60);
    s.push(40);
    if(!s.isEmpty()) s.pop();

    s.push(25);
    if(!s.isEmpty()) s.pop();
    if(!s.isEmpty()) s.pop();

    if(!s.isEmpty()) s.pop();
    if(!s.isEmpty()) s.pop();
    s.push(50);


    return 0;
}
```


## Soal 3

```bash
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

// Fungsi untuk menentukan prioritas operator
int precedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

// Fungsi untuk cek apakah karakter adalah operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Fungsi utama konversi infix ke postfix
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        // Jika operand (huruf/angka)
        if (isalnum(c)) {
            postfix += c;
        }
        // Jika '('
        else if (c == '(') {
            st.push(c);
        }
        // Jika ')'
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // hapus '('
        }
        // Jika operator
        else if (isOperator(c)) {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop semua operator tersisa
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

// Main function
int main() {
    string infix;

    cout << "Masukkan ekspresi infix: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Postfix: " << postfix << endl;

    return 0;
}
```


## Soal 4

```bash
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> data;

    data.push(19);
    cout << "19 telah ditambahkan ke dalam queue" << endl;
    data.push(7);
    cout << "7 telah ditambahkan ke dalam queue" << endl;
    

    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 


    data.push(40);
    cout << "40 telah ditambahkan ke dalam queue" << endl;


    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    
    
    data.push(18);
    cout << "18 telah ditambahkan ke dalam queue" << endl;


    while(!data.empty()) {
        cout << data.front() << endl;
        data.pop();
    }

    return 0;

}
```


## Soal 5

```bash
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <char> Mhs;

    cout << "=============================================" << endl;
    cout << "Layanan Akademik Mahasiswa" << endl;
    cout << "=============================================" << endl;
    cout << endl;
    cout << " 1. Ambil Nomor Antrian" << endl;
    cout << " 2. Mahasiswa sedang dilayani" << endl;
    cout << " 3. Lihat Antrian" << endl << endl;
    cout << "=============================================" << endl;
    

    while (true) {
        cout << endl;
        cout << "Pilih layanan : ";
        int command;
        cin >> command;

        if(command == 1) {
            char kodeMhs;
            cout << "Masukkan kode mahasiswa: ";
            cin >> kodeMhs;

            Mhs.push(kodeMhs);
            cout << "Mahasiswa " << kodeMhs << " ditambahkan ke dalam antrian" << endl;
        }

        else if(command == 2) {
            cout << "Mahasiswa " << Mhs.front() << " sedang dalam proses pelayanan" << endl;
        }

        else if(command == 3) {
            cout << "Antrian Layanan Akademik" << endl;
            while(!Mhs.empty()) {
                cout << Mhs.front() << endl;
                Mhs.pop();
            }
            cout << endl;
            break;
        }

    }

    cout << "Terimakasih Telah Menggunakan Layanan Akdemik" << endl;
    cout << "=============================================" << endl << endl;
    return 0;
}
```




