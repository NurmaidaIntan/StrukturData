// C++ program to check if a given 
// character is vowel or consonant

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Fungsi untuk menentukan vokal atau konsonan
void vowelOrConsonant (char x){
    if(x == 'A' || x == 'a' ||
    x == 'I' || x == 'i' ||
    x == 'U' || x == 'u' ||
    x == 'E' || x == 'e' ||
    x == 'O' || x == 'o' ) cout << "Vowel" << endl;

    else cout << "Consonant" << endl;
}

int main(){
    char x;
    //cin >> x;
    //vowelOrConsonant(x);

    vowelOrConsonant('c');
    vowelOrConsonant('E');
    return 0;
}