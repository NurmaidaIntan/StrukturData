//  Tugas Pertemuan 3
//  Struct (Record)

#include <bits/stdc++.h>
using namespace std;

//  Mendeklarasikan Tipe Data Struct
struct Mahasiswa{
    string nim;
    string nama;
    string prodi;
    float ipk;
};

struct Buku{
    string judul;
    string penulis;
    int jumlahHalaman;
    float harga;
};

struct Kendaraan{
    string merk;
    string jenis;
    string bahanBakar;
    string nomorPolisi;
    string warnaBody;
    int jumlahRoda;
    int volumeMesin;
    int tahunProduksi;
    int jumlahPenumpang;
    float harga;
};

int main(){
    Mahasiswa mhs1, mhs2;
    Buku buku1, buku2;
    Kendaraan kdr1, kdr2;

    cout << "Masukkan data mahasiswa 1 : " << endl;
    mhs1.nim = "11223344";
    getline(cin, mhs1.nama);
    getline(cin, mhs1.prodi);
    cin >> mhs1.ipk;
    cin.ignore();

    cout << "Masukkan data mahasiswa 1 : " << endl;
    mhs2.nim = "11335577";
    getline(cin, mhs2.nama);
    getline(cin, mhs2.prodi);
    cin >> mhs2.ipk;
    cin.ignore();
    
    
    cout << "Data Mahasiswa" << endl;
    cout << "Mahasiswa 1 : \n";
    cout << "NIM : " << mhs1.nim << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Program Studi : " << mhs1.prodi << endl;
    cout << "IPK : " << mhs1.ipk;

    cout << endl << endl;
    cout << "Mahasiswa 2 : \n";
    cout << "NIM : " << mhs2.nim << endl;
    cout << "Nama : " << mhs2.nama << endl;
    cout << "Program Studi : " << mhs2.prodi << endl;
    cout << "IPK : " << mhs2.ipk;
    return 0;

}