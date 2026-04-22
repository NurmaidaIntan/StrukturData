Nama        : Nurmaida Intan Permadani  

NRP         : 5025251040  

Mata Kuliah : Struktur Data  

Materi      : Queue


# Linked List

Linked List adalah struktur data linear dimana elemen elemennya tidak disimpan di lokasi memori yang berdekatan. Setiap elemen, yang disebut Node, terhubung menggunakan pointer


## Struktur Dasar Node 

Setiap Node dalam Linked List minimal terdiri dari dua bagian :
- Data : Nilai atau informasi yang ingin disampaikan
- Next (Pointer) : Alamat memori yang merujuk ke node berikutnya dalam urutan


## Karakteristik Utama 

- Dinamis : ukuran dapat bertambah atau berkurang saat program berjalan
- Alokasi Memori : menggunakan memori secara efisien karena node bisa tersebar di mana saja di dalam RAM
- Akses Data : sequential (berurutan)


## Jenis Jenis Linked List

- Singly Linked List : setiap node hanya punya satu pointer ke arah depan
- Double Linked List : setiap node punya dua pointer, satu ke depan dan satu ke belakang


## Operasi Dasar

- Tranversal : menelusuri list dari awal sampai akhir
- Insertion : bisa dilakukan di awal, di tengah, atau di akhir
- Deletion : menghapus node dengan mengatur ulang pointer agar rantai tidak terputus
- Searching : mencari node dengan nilai tertentu secara berurutan


## Implementasi kode di C++

```bash
#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

int main() {
    // Membuat 3 node
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    // Isi data
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // Hubungkan node
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Traversal (menampilkan data)
    Node* current = node1;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL";

    return 0;
}
```
## Output

![Output](image-1.png)