//  Tugas Pertemuan 3
//  Array
//  Mengakses Elemen Array 1 dimensi

#include <bits/stdc++.h>
using namespace std;

int main(){
    float ipkMhs[4] = {3.2, 3.6, 2.9, 3.0};
    ipkMhs[4] = 3.1;

    for(int i = 0; i < 4; i++){
        cout << ipkMhs[i] << endl;
    }

    return 0;
}
