//  Tugas Pertemuan 3
//  Array
//  Mengakses Elemen Array 2 dimensi

#include <bits/stdc++.h>
using namespace std;

int main(){
    float matriks[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> matriks[i][j];
        }
    }

    for(int brs = 0; brs < 3; brs++){
        for(int klm = 0; klm < 4; klm++){
            cout  << matriks[brs][klm] << " ";
        }
        cout << endl;
    }

    return 0;
}