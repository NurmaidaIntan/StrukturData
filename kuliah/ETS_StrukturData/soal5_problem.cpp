//Nama        : Nurmaida Intan Permadani  
//NRP         : 5025251040  
//Mata Kuliah : Struktur Data 
//Topik       : Antrian Layanan Akademik

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